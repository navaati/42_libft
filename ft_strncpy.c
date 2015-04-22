/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/22 01:50:47 by lgillot-          #+#    #+#             */
/*   Updated: 2015/04/22 02:00:20 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

#include "libft.h"

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
