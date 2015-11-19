/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mem.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/19 01:33:05 by lgillot-          #+#    #+#             */
/*   Updated: 2015/11/19 01:35:52 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

#include <ft_mem.h>

void	*ft_memset(void *b, int c, size_t len)
{
	void *it;

	it = b;
	while (it < b + len)
	{
		*((unsigned char *)it) = (unsigned char)c;
		it++;
	}
	return (b);
}

void	ft_bzero(void *s, size_t n)
{
	if (n != 0)
	{
		ft_memset(s, 0, n);
	}
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dst_it;
	const char	*src_it;

	dst_it = dst;
	src_it = src;
	while (n)
	{
		*dst_it++ = *src_it++;
		n--;
	}
	return (dst);
}

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	void	*stop;
	size_t	pos_after_stop;

	stop = ft_memchr(src, c, n);
	pos_after_stop = stop - src + 1;
	ft_memcpy(dst, src, stop ? pos_after_stop : n);
	return (stop ? dst + pos_after_stop : NULL);
}

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*dst_it;
	const char	*src_it;

	if (src > dst)
	{
		ft_memcpy(dst, src, n);
	}
	else
	{
		dst_it = dst + n - 1;
		src_it = src + n - 1;
		while (n)
		{
			*dst_it-- = *src_it--;
			n--;
		}
	}
	return (dst);
}
