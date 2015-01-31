/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/31 17:24:05 by lgillot-          #+#    #+#             */
/*   Updated: 2015/01/31 17:37:46 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

#include "libft.h"

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
