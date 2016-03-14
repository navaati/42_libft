/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   priv.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/10 13:26:45 by lgillot-          #+#    #+#             */
/*   Updated: 2016/03/10 13:26:47 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRIV_H
# define PRIV_H

# include <libft.h>
# include <stdarg.h>

typedef struct s_params		t_params;

typedef int	(*t_spec_func)(int fd, t_params conv, va_list ap);

typedef enum				e_len_mod
{
	LEN_MOD_NONE,
	LEN_MOD_HH,
	LEN_MOD_H,
	LEN_MOD_L,
	LEN_MOD_LL,
	LEN_MOD_J,
	LEN_MOD_T,
	LEN_MOD_Z,
	LEN_MOD_BIG_L,
}							t_len_mod;

struct						s_params
{
	bool		alt;
	bool		zero;
	t_len_mod	len_modifier;
	int			min_width;
};

typedef struct				s_specifier
{
	char		c;
	t_spec_func	f;
}							t_specifier;

extern const t_specifier	g_spec_table[];
bool						parse_conversion(t_parse_in fmt, t_params *params,
												t_spec_func *spec_func);

#endif
