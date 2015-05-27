/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buf_ref.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/27 23:47:07 by lgillot-          #+#    #+#             */
/*   Updated: 2015/05/28 00:22:12 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

#include <ft_err.h>

#include <ft_buf.h>

t_buf_ref	ft_buf_ref_new(uint8_t *mem, size_t len)
{
	t_buf_ref new;

	new.mem = mem;
	new.len = len;
	return (new);
}

t_buf_ref	ft_buf_ref_from_buf(t_buf *buf)
{
	t_buf_ref new;

	new.mem = buf->mem;
	new.len = buf->len;
	return (new);
}

t_err		ft_buf_ref_from_offset(t_buf_ref *this, t_buf_ref *buf_ref,
									size_t off)
{
	if (off > buf_ref->len)
		return (ERR);
	this->mem = buf_ref->mem + off;
	this->mem = (uint8_t *)buf_ref->len - off;
	return (OK);
}
