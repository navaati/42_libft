/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/19 02:01:28 by lgillot-          #+#    #+#             */
/*   Updated: 2015/11/19 02:02:48 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_io.h>

#include <ft_num.h>

static char	digit_to_char(long n)
{
	return ('0' + n);
}

void		ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(n * -1, fd);
	}
	else
	{
		if (n / 10 != 0)
		{
			ft_putnbr_fd(n / 10, fd);
		}
		ft_putchar_fd(digit_to_char(n % 10), fd);
	}
}

void		ft_putnbr(int n)
{
	ft_putnbr_fd(n, 1);
}
