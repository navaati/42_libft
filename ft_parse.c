/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/10 15:53:23 by lgillot-          #+#    #+#             */
/*   Updated: 2016/03/10 15:53:25 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_parse.h>

bool	match_char(t_parse_in in, char match)
{
	if (**in == match)
	{
		(*in)++;
		return (true);
	}
	else
		return (false);
}

bool	match_not_char(t_parse_in in, char not_match, char *c)
{
	if (**in != not_match)
	{
		if (c)
			*c = **in;
		(*in)++;
		return (true);
	}
	else
		return (false);
}

bool	match_chars(t_parse_in in, char *matches, char *c)
{
	while (*matches)
	{
		if (match_char(in, *matches))
		{
			if (c)
				*c = *matches;
			return (true);
		}
		matches++;
	}
	return (false);
}

bool	match_not_chars(t_parse_in in, char *not_matches, char *c)
{
	while (*not_matches)
	{
		if (match_not_char(in, *not_matches, c))
			return (true);
		not_matches++;
	}
	return (false);
}
