/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/10 13:26:38 by lgillot-          #+#    #+#             */
/*   Updated: 2016/03/10 13:26:40 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

#include "priv.h"

static bool	parse_nat(t_parse_in fmt, int *n)
{
	bool	ret;
	char	c;

	*n = 0;
	ret = false;
	while (match_chars(fmt, "0123456789", &c))
	{
		ret = true;
		*n *= 10;
		*n += c - '0';
	}
	return (ret);
}

static bool	parse_len_modifier(t_parse_in fmt, t_len_mod *len_modifier)
{
	*len_modifier = LEN_MOD_NONE;
	if (match_char(fmt, 'h'))
		*len_modifier = match_char(fmt, 'h') ? LEN_MOD_HH : LEN_MOD_H;
	if (match_char(fmt, 'l'))
		*len_modifier = match_char(fmt, 'l') ? LEN_MOD_LL : LEN_MOD_L;
	if (match_char(fmt, 'j'))
		*len_modifier = LEN_MOD_J;
	if (match_char(fmt, 't'))
		*len_modifier = LEN_MOD_T;
	if (match_char(fmt, 'z'))
		*len_modifier = LEN_MOD_Z;
	if (match_char(fmt, 'L'))
		*len_modifier = LEN_MOD_BIG_L;
	return (true);
}

static bool	parse_specifier(t_parse_in fmt, t_spec_func *spec_func)
{
	const t_specifier	*spec_it;

	spec_it = g_spec_table;
	while (spec_it->c)
	{
		if (match_char(fmt, spec_it->c))
		{
			*spec_func = spec_it->f;
			return (true);
		}
		spec_it++;
	}
	return (false);
}

bool		parse_conversion(t_parse_in fmt, t_params *params,
								t_spec_func *spec_func)
{
	int			ret;

	params->alt = false;
	if (match_char(fmt, '#'))
		params->alt = true;
	parse_nat(fmt, &params->min_width);
	parse_len_modifier(fmt, &params->len_modifier);
	ret = parse_specifier(fmt, spec_func);
	return (ret);
}
