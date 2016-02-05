/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_endian_priv.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/15 10:10:50 by lgillot-          #+#    #+#             */
/*   Updated: 2016/03/15 10:10:52 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ENDIAN_PRIV_H
# define FT_ENDIAN_PRIV_H

# ifndef __BYTE_ORDER__
#  warning "__BYTE_ORDER__ macro not available, defaulting to little endian"
# endif

# if defined(__BYTE_ORDER__) && __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__

#  define HTOBE(n) return (x)
#  define HTOLE(n) return (invert##n(x))

# else

#  define HTOBE(n) return (invert##n(x))
#  define HTOLE(n) return (x)

# endif

#endif
