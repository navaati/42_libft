/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_endian32.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/15 09:11:55 by lgillot-          #+#    #+#             */
/*   Updated: 2016/03/15 09:11:59 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_endian.h>

#include "ft_endian_priv.h"

static uint32_t	invert32(uint32_t x)
{
	return ((x >> 24 & 0xff) |
			(x << 8 & 0xff0000) |
			(x >> 8 & 0xff00) |
			(x << 24 & 0xff000000));
}

uint32_t		htobe32(uint32_t x)
{
	HTOBE(32);
}

uint32_t		htole32(uint32_t x)
{
	HTOLE(32);
}

uint32_t		be32toh(uint32_t x)
{
	HTOBE(32);
}

uint32_t		le32toh(uint32_t x)
{
	HTOLE(32);
}
