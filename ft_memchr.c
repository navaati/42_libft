/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/31 18:18:07 by lgillot-          #+#    #+#             */
/*   Updated: 2015/01/31 18:31:06 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const void *s_it;

	s_it = s;
	while (s_it < s + n)
	{
		if (*(const unsigned char *)s_it == (unsigned char)c)
		{
			return (void *)s_it;
		}
		s_it++;
	}
	return (NULL);
}
