/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/12 18:45:55 by lgillot-          #+#    #+#             */
/*   Updated: 2015/05/12 19:12:23 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	l1;
	size_t	l2;
	char	*buf;

	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	if ((buf = malloc(l1 + l2 + 1)) != NULL)
	{
		ft_memcpy(buf, s1, l1);
		ft_memcpy(buf + l1, s2, l2);
		buf[l1 + l2] = '\0';
	}
	return (buf);
}
