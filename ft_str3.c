/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/19 01:38:33 by lgillot-          #+#    #+#             */
/*   Updated: 2015/11/19 01:42:05 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdbool.h>

#include <ft_str.h>

static bool	match(const char *s, const char *prefix)
{
	while (*prefix)
	{
		if (*s != *prefix)
		{
			return (false);
		}
		prefix++;
		s++;
	}
	return (true);
}

char		*ft_strstr(const char *s1, const char *s2)
{
	if (*s2 == '\0')
	{
		return ((char *)s1);
	}
	while (*s1)
	{
		if (match(s1, s2))
		{
			return ((char *)s1);
		}
		s1++;
	}
	return (NULL);
}

static bool	matchn(const char *s, const char *prefix, size_t n)
{
	while (*prefix && n)
	{
		if (*s != *prefix)
		{
			return (false);
		}
		prefix++;
		s++;
		n--;
	}
	return (n);
}

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	if (*s2 == '\0')
	{
		return ((char *)s1);
	}
	while (*s1 && n)
	{
		if (matchn(s1, s2, n + 1))
		{
			return ((char *)s1);
		}
		s1++;
		n--;
	}
	return (NULL);
}

int			ft_strcmp(const char *s1, const char *s2)
{
	const unsigned char	*it1;
	const unsigned char	*it2;
	int					diff;

	it1 = (unsigned char *)s1;
	it2 = (unsigned char *)s2;
	while (*it1 && *it2)
	{
		diff = *it1 - *it2;
		if (diff)
		{
			return (diff);
		}
		it1++;
		it2++;
	}
	return (*it1 - *it2);
}
