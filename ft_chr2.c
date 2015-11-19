/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chr2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/19 01:28:39 by lgillot-          #+#    #+#             */
/*   Updated: 2015/11/19 01:35:43 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

#include <ft_chr.h>

int		ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

int		ft_isascii(int c)
{
	return (c >= 0 && c <= 0177);
}

int		ft_isprint(int c)
{
	return (c >= 040 && c <= 0176);
}

int		ft_tolower(int c)
{
	return (ft_isupper(c) ? c + 0x20 : c);
}

int		ft_toupper(int c)
{
	return (ft_islower(c) ? c - 0x20 : c);
}
