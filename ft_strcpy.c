/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/22 00:13:52 by lgillot-          #+#    #+#             */
/*   Updated: 2015/04/22 00:48:55 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
