/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/05 23:04:19 by lgillot-          #+#    #+#             */
/*   Updated: 2015/05/06 00:00:30 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	found;

	while (!(found = *s == (char)c) && *s)
	{
		s++;
	}
	if (found)
	{
		return ((char *)s);
	}
	else
	{
		return (NULL);
	}
}
