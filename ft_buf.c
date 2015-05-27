/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/25 00:37:31 by lgillot-          #+#    #+#             */
/*   Updated: 2015/05/28 00:19:26 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include <ft_err.h>
#include <ft_mem.h>

#include <ft_buf.h>

t_buf	ft_buf_new(uint8_t *mem, size_t len)
{
	t_buf new;

	new.mem = mem;
	new.len = len;
	return (new);
}

t_err	ft_buf_new_cpy(t_buf *this, uint8_t const *mem, size_t len)
{
	uint8_t	*new_mem;

	if (!(new_mem = (uint8_t *)malloc(len)))
		return (ERR);
	this->mem = ft_memcpy(new_mem, mem, len);
	this->len = len;
	return (OK);
}

t_err	ft_buf_clone(t_buf *this, t_buf const *buf)
{
	return (ft_buf_new_cpy(this, buf->mem, buf->len));
}

t_err	ft_buf_from_buf_ref(t_buf *this, t_buf_ref const *buf_ref)
{
	return (ft_buf_new_cpy(this, buf_ref->mem, buf_ref->len));
}

void	ft_buf_destroy(t_buf *this)
{
	free(this->mem);
	this->len = 0;
	this->mem = 0;
}
