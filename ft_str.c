/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/19 01:37:00 by lgillot-          #+#    #+#             */
/*   Updated: 2015/11/19 01:37:49 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

#include <ft_str.h>

size_t	ft_strlen(const char *s)
{
	size_t len;

	len = 0;
	while (*s)
	{
		s++;
		len++;
	}
	return (len);
}

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*s2;

	len = ft_strlen(s1);
	s2 = (char *)malloc(len * sizeof(char));
	if (!s2)
	{
		return (NULL);
	}
	return (ft_strcpy(s2, s1));
}

char	*ft_strcpy(char *dst, const char *src)
{
	char	*dst_orig;

	dst_orig = dst;
	while (*src)
	{
		*dst = *src;
		src++;
		dst++;
	}
	return (dst_orig);
}

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	char	*dst_orig;

	dst_orig = dst;
	while (n)
	{
		if (*src)
		{
			*dst = *src;
			src++;
		}
		else
		{
			*dst = '\0';
		}
		dst++;
		n--;
	}
	return (dst_orig);
}

char	*ft_strcat(char *s1, const char *s2)
{
	ft_strcpy(s1 + ft_strlen(s1), s2);
	return (s1);
}
