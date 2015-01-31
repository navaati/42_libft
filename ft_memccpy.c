/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/31 18:38:56 by lgillot-          #+#    #+#             */
/*   Updated: 2015/01/31 18:58:53 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	void	*stop;
	size_t	pos_after_stop;

	stop = ft_memchr(src, c, n);
	pos_after_stop = stop - src + 1;
	ft_memcpy(dst, src, stop ? pos_after_stop : n);
	return (stop ? dst + pos_after_stop : NULL);
}
