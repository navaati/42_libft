/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_io2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/19 01:31:06 by lgillot-          #+#    #+#             */
/*   Updated: 2015/11/19 01:35:32 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <unistd.h>

#include <ft_io.h>

void	ft_putendl_fd(char const *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

void	ft_putendl(char const *s)
{
	ft_putendl_fd(s, 1);
}

t_err	ft_fread(int fd, void *buf, size_t len)
{
	size_t	done;
	ssize_t	ret;

	done = 0;
	while (done < len)
	{
		ret = read(fd, buf + done, len - done);
		if (ret <= 0)
			return (ERR);
		done += ret;
	}
	return (OK);
}

t_err	ft_fwrite(int fd, const void *buf, size_t len)
{
	size_t	done;
	ssize_t	ret;

	done = 0;
	while (done < len)
	{
		ret = write(fd, buf + done, len - done);
		if (ret <= 0)
			return (ERR);
		done += ret;
	}
	return (OK);
}
