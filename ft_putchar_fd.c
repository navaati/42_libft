/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/13 19:14:19 by lgillot-          #+#    #+#             */
/*   Updated: 2015/05/13 19:25:42 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	ssize_t	unused;

	unused = write(fd, &c, 1);
	(void)unused;
}
