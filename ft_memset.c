/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/24 21:16:22 by lgillot-          #+#    #+#             */
/*   Updated: 2015/01/24 23:05:12 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
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
