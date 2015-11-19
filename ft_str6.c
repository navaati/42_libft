/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str6.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/19 01:55:48 by lgillot-          #+#    #+#             */
/*   Updated: 2015/11/19 01:59:41 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdbool.h>

#include <ft_str.h>

void		ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (*s)
		f(i++, s++);
}

char		*ft_strmap(char const *s, char (*f)(char))
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

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
			new_str[i] = f(i, s[i]);
			i++;
		}
	}
	return (new_str);
}

static bool	is_space(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

char		*ft_strtrim(char const *s)
{
	size_t	size;

	while (is_space(*s))
		s++;
	size = ft_strlen(s);
	while (is_space(s[size - 1]) && size > 0)
		size--;
	return (ft_strsub(s, 0, size));
}
