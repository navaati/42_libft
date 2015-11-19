/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str4.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/19 01:39:26 by lgillot-          #+#    #+#             */
/*   Updated: 2015/11/19 01:53:37 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

#include <ft_mem.h>

#include <ft_str.h>

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

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *buf;

	if ((buf = malloc(len + 1)) != NULL)
	{
		ft_memcpy(buf, s + start, len);
		buf[len] = '\0';
	}
	return (buf);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	l1;
	size_t	l2;
	char	*buf;

	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	if ((buf = malloc(l1 + l2 + 1)) != NULL)
	{
		ft_memcpy(buf, s1, l1);
		ft_memcpy(buf + l1, s2, l2);
		buf[l1 + l2] = '\0';
	}
	return (buf);
}

char	*ft_strnew(size_t size)
{
	return (ft_memalloc(size + 1));
}
