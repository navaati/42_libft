/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/13 19:37:16 by lgillot-          #+#    #+#             */
/*   Updated: 2015/09/14 17:40:26 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	ssize_t	unused;

	unused = write(fd, s, ft_strlen(s));
	(void)unused;
}
