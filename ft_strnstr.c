/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/06 20:36:12 by lgillot-          #+#    #+#             */
/*   Updated: 2015/05/06 21:40:53 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

#include "libft.h"

static t_bool	matchn(const char *s, const char *prefix, size_t n)
{
	while (*prefix && n)
	{
		if (*s != *prefix)
		{
			return (FALSE);
		}
		prefix++;
		s++;
		n--;
	}
	return (n);
}

char			*ft_strnstr(const char *s1, const char *s2, size_t n)
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
