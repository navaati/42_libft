/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/01 17:22:37 by lgillot-          #+#    #+#             */
/*   Updated: 2015/05/05 22:57:22 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

#include "libft.h"

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
