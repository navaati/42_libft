/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/24 22:26:43 by lgillot-          #+#    #+#             */
/*   Updated: 2015/05/28 00:08:10 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BUF_H
# define FT_BUF_H

# include <stdint.h>

/*
** This buffer always owns the memory it points to, thus free'ing it on destroy.
*/
typedef struct	s_buf
{
	size_t	len;
	uint8_t	*mem;
}				t_buf;

/*
** This buffer does not owns its memory, it just associates it with a size.
** As such it does not need a destructor, since it does not free its memory.
*/
typedef struct	s_buf_ref
{
	size_t	len;
	uint8_t	*mem;
}				t_buf_ref;

/*
** == t_buf ==
*/

/*
** Creates a new buffer, taking ownership of the given memory.
*/
t_buf			ft_buf_new(uint8_t *mem, size_t len);

/*
** Creates a new buffer, copying the memory (thus taking ownership of the copy
** and not of the given memory).
** Errors out on ENOMEM.
*/
t_err			ft_buf_new_cpy(t_buf *this, uint8_t const *mem, size_t len);

/*
** Copy constuctor.
** Errors out on ENOMEM.
*/
t_err			ft_buf_clone(t_buf *this, t_buf const *buf);

/*
** Creates a new buffer, copying the memory pointed by a t_buf_ref.
*/
t_err			ft_buf_from_buf_ref(t_buf *this, t_buf_ref const *buf_ref);

/*
** Destroy the buffer by free'ing the owned memory. From this point the buffer
** is invalid.
*/
void			ft_buf_destroy(t_buf *this);

/*
** == t_buf_ref ==
*/

/*
** Creates a new reference buffer pointing to mem and of size len.
** The reference buffer is valid as long as the memory pointed to by mem is.
*/
t_buf_ref		ft_buf_ref_new(uint8_t *mem, size_t len);

/*
** Creates a new reference buffer referencing the same memory than buf
** The reference buffer is valid as long as buf is.
*/
t_buf_ref		ft_buf_ref_from_buf(t_buf *buf);

/*
** Creates a new reference buffer referencing the memory of buf with an
** offset of off. The size of the new buffer is off less than the size of buf.
** Errors out if the produced buffer would be past the
** end of buf (ie if the size of the new buffer would be negative)
*/
t_err			ft_buf_ref_from_offset(t_buf_ref *this, t_buf_ref *buf,
										size_t off);

#endif
