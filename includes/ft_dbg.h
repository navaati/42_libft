/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dbg.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/04 13:46:54 by lgillot-          #+#    #+#             */
/*   Updated: 2016/01/04 14:14:19 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DBG_H
# define FT_DBG_H

# ifndef NDEBUG
#  include <stdio.h>
#  define DBG(...) (fprintf(stderr, __VA_ARGS__))
# else
#  define DBG(...) ((void)0)
# endif

# include <assert.h>

#endif
