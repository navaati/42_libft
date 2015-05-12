/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/12 12:05:44 by lgillot-          #+#    #+#             */
/*   Updated: 2015/05/12 18:42:13 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *buf;

	if ((buf = malloc(len + 1)) != NULL)
	{
		ft_memcpy(buf, s + start, len);
		buf[len] = '\0';
	}
	return (buf);
}
