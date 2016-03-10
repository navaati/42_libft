/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/10 13:26:28 by lgillot-          #+#    #+#             */
/*   Updated: 2016/03/10 13:26:32 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdarg.h>

#include "priv.h"

static int	conversion(int fd, t_parse_in fmt, va_list ap)
{
	t_params	params;
	t_spec_func	spec_func;

	if (!parse_conversion(fmt, &params, &spec_func))
		return (-1);
	return (spec_func(fd, params, ap));
}

static int	literal(int fd, t_parse_in fmt)
{
	int	len;

	(void)fd;
	len = 0;
	while ((*fmt)[len] && (*fmt)[len] != '%')
		len++;
	ft_fwrite(fd, *fmt, len);
	*fmt += len;
	return (len);
}

int			ft_vfprintf(int fd, char const *fmt, va_list ap)
{
	int		ret;
	char	head;
	int		printed;

	printed = 0;
	while (42)
	{
		head = *fmt;
		if (head == '\0')
			return (printed);
		else if (head == '%')
		{
			fmt++;
			ret = conversion(fd, &fmt, ap);
		}
		else
			ret = literal(fd, &fmt);
		if (ret < 0)
			return (-1);
		else
			printed += ret;
	}
}

int			ft_fprintf(int fd, char const *fmt, ...)
{
	va_list	ap;
	int		printed;

	va_start(ap, fmt);
	printed = ft_vfprintf(fd, fmt, ap);
	va_end(ap);
	return (printed);
}

int			ft_printf(char const *fmt, ...)
{
	va_list	ap;
	int		printed;

	va_start(ap, fmt);
	printed = ft_vfprintf(1, fmt, ap);
	va_end(ap);
	return (printed);
}
