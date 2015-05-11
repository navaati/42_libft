/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/12 00:41:18 by lgillot-          #+#    #+#             */
/*   Updated: 2015/05/12 02:12:11 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t			len;
	char			*new_str;
	unsigned int	i;

	len = ft_strlen(s);
	new_str = ft_strnew(len);
	if (new_str)
	{
		i = 0;
		while (i < len)
		{
			new_str[i] = f(s[i]);
			i++;
		}
	}
	return (new_str);
}
