/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/07 21:42:20 by lgillot-          #+#    #+#             */
/*   Updated: 2015/05/07 21:59:04 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
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
	while (n && *it1 && *it2)
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
	return (n ? *it1 - *it2 : 0);
}
