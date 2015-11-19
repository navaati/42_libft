/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/19 01:28:19 by lgillot-          #+#    #+#             */
/*   Updated: 2015/11/19 01:35:38 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

#include <ft_chr.h>

int		ft_isspace(int c)
{
	unsigned char	uc;
	bool			r;

	uc = (unsigned char)c;
	r = uc == '\t' || uc == '\n' || uc == '\v' || uc == '\f'
		|| uc == '\r' || uc == ' ';
	return (r);
}

int		ft_isdigit(int c)
{
	unsigned char	uc;

	uc = (unsigned char)c;
	return (uc >= '0' && uc <= '9');
}

int		ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

int		ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

int		ft_isalpha(int c)
{
	return (ft_islower(c) || ft_isupper(c));
}
