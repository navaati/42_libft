/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_endian64.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/15 09:11:55 by lgillot-          #+#    #+#             */
/*   Updated: 2016/03/15 09:11:59 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_endian.h>

#include "ft_endian_priv.h"

static uint64_t	invert64(uint64_t x)
{
	x = (x << 8 & 0xFF00FF00FF00FF00ULL) | (x >> 8 & 0x00FF00FF00FF00FFULL);
	x = (x << 16 & 0xFFFF0000FFFF0000ULL) | (x >> 16 & 0x0000FFFF0000FFFFULL);
	return (x << 32 | x >> 32);
}

uint64_t		htobe64(uint64_t x)
{
	HTOBE(64);
}

uint64_t		htole64(uint64_t x)
{
	HTOLE(64);
}

uint64_t		be64toh(uint64_t x)
{
	HTOBE(64);
}

uint64_t		le64toh(uint64_t x)
{
	HTOLE(64);
}
