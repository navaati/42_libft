/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_endian16.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/15 09:11:55 by lgillot-          #+#    #+#             */
/*   Updated: 2016/03/15 09:11:59 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_endian.h>

#include "ft_endian_priv.h"

static uint16_t	invert16(uint16_t x)
{
	return (x << 8 | x >> 8);
}

uint16_t		htobe16(uint16_t x)
{
	HTOBE(16);
}

uint16_t		htole16(uint16_t x)
{
	HTOLE(16);
}

uint16_t		be16toh(uint16_t x)
{
	HTOBE(16);
}

uint16_t		le16toh(uint16_t x)
{
	HTOLE(16);
}
