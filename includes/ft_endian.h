/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_endian.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/25 03:28:17 by lgillot-          #+#    #+#             */
/*   Updated: 2015/05/25 04:09:41 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ENDIAN_H
# define FT_ENDIAN_H

# include <stdint.h>

uint16_t	ft_htobe16(uint16_t host_16bits);
uint16_t	ft_htole16(uint16_t host_16bits);
uint16_t	ft_be16toh(uint16_t big_endian_16bits);
uint16_t	ft_le16toh(uint16_t little_endian_16bits);

uint32_t	ft_htobe32(uint32_t host_32bits);
uint32_t	ft_htole32(uint32_t host_32bits);
uint32_t	ft_be32toh(uint32_t big_endian_32bits);
uint32_t	ft_le32toh(uint32_t little_endian_32bits);

uint64_t	ft_htobe64(uint64_t host_64bits);
uint64_t	ft_htole64(uint64_t host_64bits);
uint64_t	ft_be64toh(uint64_t big_endian_64bits);
uint64_t	ft_le64toh(uint64_t little_endian_64bits);

#endif
