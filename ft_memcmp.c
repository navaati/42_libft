/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/22 00:51:07 by lgillot-          #+#    #+#             */
/*   Updated: 2015/04/22 01:47:18 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*it1;
	const unsigned char	*it2;
	int					diff;

	it1 = (unsigned char *)s1;
	it2 = (unsigned char *)s2;
	if (n == 0)
	{
		return (0);
	}
	while (n)
	{
		diff = *it1 - *it2;
		if (diff)
		{
			return (diff);
		}
		it1++;
		it2++;
		n--;
	}
	return (0);
}
