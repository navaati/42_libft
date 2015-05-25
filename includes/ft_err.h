/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_err.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/25 03:28:17 by lgillot-          #+#    #+#             */
/*   Updated: 2015/05/25 04:09:41 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ERR_H
# define FT_ERR_H

# include <stdbool.h>

/*
** This type is usefull to signal error when returned from functions.
** It is used like this:
**	if (!do_something())
**	{
**		handle_error();
**		return (ERR);
**	}
** As such, it provides an unified pattern with functions returning pointers,
** since NULL == ERR.
*/
typedef bool	t_err;

# define OK 1
# define ERR 0

# define GOTO(label) goto label

#endif
