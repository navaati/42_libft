/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/10 15:53:12 by lgillot-          #+#    #+#             */
/*   Updated: 2016/03/10 15:53:15 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PARSE_H
# define FT_PARSE_H

# include <libft.h>

typedef char const * *const	t_parse_in;

bool	match_char(t_parse_in in, char match);
bool	match_chars(t_parse_in in, char *matches, char *c);
bool	match_not_char(t_parse_in in, char not_match, char *c);
bool	match_not_chars(t_parse_in in, char *not_matches, char *c);

#endif
