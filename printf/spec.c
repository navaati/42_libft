/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/10 13:26:51 by lgillot-          #+#    #+#             */
/*   Updated: 2016/03/10 13:26:53 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdarg.h>
#include <unistd.h>

#include "priv.h"

static const char g_digits[16] = {
	'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
	'a', 'b', 'c', 'd', 'e', 'f'
};

static int	print_padding(int fd, t_params params, size_t num_len)
{
	char	buf[256];
	int		padding;
	int		printed;
	size_t	to_print;

	printed = 0;
	padding = params.min_width - num_len;
	if (padding > 0)
	{
		ft_memset(buf, ' ', 256);
		while (printed < padding)
		{
			to_print = padding - printed > 256 ? 256 : padding - printed;
			if (!ft_fwrite(fd, buf, to_print))
				return (-1);
			printed += to_print;
		}
	}
	return (printed);
}

static int	print_number(int fd, t_params params, char *buf, size_t len)
{
	int	padding;

	if (len == 0)
	{
		buf = "0";
		len = 1;
	}
	if ((padding = print_padding(fd, params, len)) < 0)
		return (-1);
	return (ft_fwrite(fd, buf, len) ? len + padding : -1);
}

static int	print_hex(int fd, t_params params, va_list ap)
{
	unsigned long	n;
	size_t			len;
	char			buf[16];

	if (params.len_modifier == LEN_MOD_NONE)
		n = va_arg(ap, unsigned int);
	else if (params.len_modifier == LEN_MOD_L)
		n = va_arg(ap, unsigned long);
	else
		return (-1);
	len = 0;
	while (n)
	{
		len++;
		buf[16 - len] = g_digits[n & 0xF];
		n >>= 4;
	}
	return (print_number(fd, params, &buf[16 - len], len));
}

static int	print_string(int fd, t_params params, va_list ap)
{
	char	*str;
	size_t	len;

	if (params.len_modifier != LEN_MOD_NONE)
		return (-1);
	str = va_arg(ap, char *);
	len = ft_strlen(str);
	return (ft_fwrite(fd, str, len) ? len : -1);
}

static int	print_percent(int fd, t_params params, va_list ap)
{
	(void)ap;
	if (params.len_modifier != LEN_MOD_NONE)
		return (-1);
	return (ft_fwrite(fd, "%", 1) ? 1 : -1);
}

const t_specifier	g_spec_table[] = {
	{ '%', print_percent },
	{ 'x', print_hex },
	{ 's', print_string },
	{ '\0', NULL }
};
