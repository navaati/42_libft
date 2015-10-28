/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/06 18:31:22 by lgillot-          #+#    #+#             */
/*   Updated: 2015/10/28 02:07:42 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

#include "libft.h"

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
