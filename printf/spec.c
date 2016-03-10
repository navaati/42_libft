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
	if (len == 0)
	{
		ft_fwrite(fd, "0", 1);
		len = 1;
	}
	else
		ft_fwrite(fd, &buf[16 - len], len);
	return (len);
}

static int	print_string(int fd, t_params params, va_list ap)
{
	char	*str;
	size_t	len;

	if (params.len_modifier != LEN_MOD_NONE)
		return (-1);
	str = va_arg(ap, char *);
	len = ft_strlen(str);
	ft_fwrite(fd, str, len);
	return (len);
}

static int	print_percent(int fd, t_params params, va_list ap)
{
	(void)ap;
	if (params.len_modifier != LEN_MOD_NONE)
		return (-1);
	ft_fwrite(fd, "%", 1);
	return (1);
}

const t_specifier	g_spec_table[] = {
	{ '%', print_percent },
	{ 'x', print_hex },
	{ 's', print_string },
	{ '\0', NULL }
};
