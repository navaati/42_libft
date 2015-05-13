/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/12 20:07:21 by lgillot-          #+#    #+#             */
/*   Updated: 2015/05/13 18:58:35 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

static unsigned int	nb_chars(long n)
{
	unsigned int	width;

	if (n == 0)
		return (1);
	width = n < 0 ? 1 : 0;
	while (n)
	{
		n /= 10;
		width++;
	}
	return (width);
}

static char			digit_to_char(long n)
{
	return ('0' + n);
}

static void			apply_sign(long *n, char *s)
{
	if (*n < 0)
	{
		*s = '-';
		*n *= -1;
	}
}

char				*ft_itoa(int n)
{
	long	big_n;
	char	*r;
	char	*it;

	big_n = n;
	if (big_n == 0)
		r = "0";
	else
	{
		r = malloc(nb_chars(big_n) + 1);
		if (r)
		{
			it = r + nb_chars(big_n);
			apply_sign(&big_n, r);
			*it-- = '\0';
			while (big_n)
			{
				*it-- = digit_to_char(big_n % 10);
				big_n /= 10;
			}
		}
	}
	return (r);
}
