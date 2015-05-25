/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/24 22:20:52 by lgillot-          #+#    #+#             */
/*   Updated: 2015/10/28 02:38:07 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdbool.h>
# include <stdint.h>

# define GOTO(label) goto label

/*
** Byte buffers manipulation
*/
# include "ft_mem.h"

/*
** String manipulation
*/
# include "ft_str.h"

/*
** Characters predicates and manipulation
*/
# include "ft_chr.h"

/*
** Number conversion
*/
# include "ft_num.h"

/*
** Input/output
*/
# include "ft_io.h"

#endif
