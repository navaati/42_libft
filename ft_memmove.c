/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/31 17:40:42 by lgillot-          #+#    #+#             */
/*   Updated: 2015/01/31 18:46:54 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

#include "libft.h"

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
