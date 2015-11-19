/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str5.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/19 01:54:10 by lgillot-          #+#    #+#             */
/*   Updated: 2015/11/19 01:56:15 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

#include <ft_mem.h>

#include <ft_str.h>

void	ft_strdel(char **as)
{
	ft_memdel((void **)as);
}

void	ft_strclr(char *s)
{
	while (*s)
		*s++ = '\0';
}

int		ft_strequ(char const *s1, char const *s2)
{
	return (ft_strcmp(s1, s2) == 0);
}

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	return (ft_strncmp(s1, s2, n) == 0);
}

void	ft_striter(char *s, void (*f)(char *))
{
	while (*s)
		f(s++);
}
