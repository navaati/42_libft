/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mem2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/19 01:33:03 by lgillot-          #+#    #+#             */
/*   Updated: 2015/11/19 01:36:14 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

#include <ft_mem.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const void *s_it;

	s_it = s;
	while (s_it < s + n)
	{
		if (*(const unsigned char *)s_it == (unsigned char)c)
		{
			return (void *)s_it;
		}
		s_it++;
	}
	return (NULL);
}

int		ft_memcmp(const void *s1, const void *s2, size_t n)
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

void	*ft_memalloc(size_t size)
{
	void	*buf;

	buf = malloc(size);
	if (buf)
		ft_bzero(buf, size);
	return (buf);
}

void	ft_memdel(void **ap)
{
	free(*ap);
	*ap = NULL;
}
