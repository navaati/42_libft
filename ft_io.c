/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_io.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/19 01:30:50 by lgillot-          #+#    #+#             */
/*   Updated: 2015/11/19 01:35:27 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <ft_str.h>

#include <ft_io.h>

void	ft_putchar_fd(char c, int fd)
{
	ft_fwrite(fd, &c, 1);
}

void	ft_putchar(char c)
{
	ft_putchar_fd(c, 1);
}

void	ft_putstr_fd(char const *s, int fd)
{
	ft_fwrite(fd, s, ft_strlen(s));
}

void	ft_putstr(char const *s)
{
	ft_putstr_fd(s, 1);
}
