/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/12 19:44:17 by lgillot-          #+#    #+#             */
/*   Updated: 2015/05/12 20:04:44 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

static int	word_len(const char *str, char c)
{
	int	i;

	i = 0;
	while (*str && *str != c)
	{
		i++;
		str++;
	}
	return (i);
}

static void	copy_word(const char **src, char *dest, char c)
{
	while (**src && **src != c)
	{
		*dest = **src;
		dest++;
		(*src)++;
	}
	*dest = '\0';
}

static char	**split_rec(const char *str, int word_num, char c)
{
	int		w_len;
	char	*word;
	char	**tab_end;
	int		tab_size;

	w_len = word_len(str, c);
	word = malloc(sizeof(char) * (w_len + 1));
	copy_word(&str, word, c);
	while (*str == c)
		str++;
	if (!*str)
	{
		tab_size = word_num + 1;
		tab_end = (char**)malloc(sizeof(char*) * tab_size) + tab_size - 1;
		*tab_end = 0;
	}
	else
	{
		tab_end = split_rec(str, word_num + 1, c);
	}
	tab_end--;
	*tab_end = word;
	return (tab_end);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**result;

	while (*s == c)
		s++;
	result = split_rec(s, 1, c);
	if (result && result[0] && result[0][0] == '\0')
		ft_strdel(&result[0]);
	return (result);
}
