/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/19 01:37:14 by lgillot-          #+#    #+#             */
/*   Updated: 2015/11/19 01:38:52 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

#include <ft_str.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	ft_strncpy(s1 + ft_strlen(s1), s2, n);
	return (s1);
}

size_t	ft_strnlen(const char *s, size_t maxlen)
{
	size_t len;

	len = 0;
	while (*s && maxlen)
	{
		s++;
		len++;
		maxlen--;
	}
	return (len);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_size;
	size_t	src_size;
	size_t	remaining_size;

	dst_size = ft_strnlen(dst, size);
	src_size = ft_strlen(src);
	remaining_size = size - dst_size;
	dst += dst_size;
	if (remaining_size > 0)
	{
		ft_strncpy(dst, src, remaining_size);
		dst[remaining_size - 1] = '\0';
	}
	return (dst_size + src_size);
}

char	*ft_strchr(const char *s, int c)
{
	int	found;

	while (!(found = *s == (char)c) && *s)
	{
		s++;
	}
	if (found)
	{
		return ((char *)s);
	}
	else
	{
		return (NULL);
	}
}

char	*ft_strrchr(const char *s, int c)
{
	char	*found;

	found = NULL;
	while (*s)
	{
		if (*s == (char)c)
		{
			found = (char *)s;
		}
		s++;
	}
	if (*s == (char)c)
	{
		found = (char *)s;
	}
	return (found);
}
