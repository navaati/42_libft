/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/10 13:27:03 by lgillot-          #+#    #+#             */
/*   Updated: 2016/03/10 13:27:05 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

int	ft_vfprintf(int fd, char const *fmt, va_list ap);
int	ft_fprintf(int fd, char const *fmt, ...);
int	ft_printf(char const *fmt, ...);

#endif
