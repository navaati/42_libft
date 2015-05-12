/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/12 19:13:55 by lgillot-          #+#    #+#             */
/*   Updated: 2015/05/12 19:39:48 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_bool	isspace(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

char			*ft_strtrim(char const *s)
{
	size_t	size;

	while (isspace(*s))
		s++;
	size = ft_strlen(s);
	while (isspace(s[size - 1]) && size > 0)
		size--;
	return (ft_strsub(s, 0, size));
}
