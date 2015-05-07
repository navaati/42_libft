/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/07 22:01:23 by lgillot-          #+#    #+#             */
/*   Updated: 2015/05/07 22:18:02 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

#include "libft.h"

void	skip_spaces(const char **str)
{
	while (ft_isspace(**str))
	{
		(*str)++;
	}
}

int		parse_sign(const char **str)
{
	if (**str == '+')
	{
		(*str)++;
		return (1);
	}
	else if (**str == '-')
	{
		(*str)++;
		return (-1);
	}
	return (1);
}

int		parse_digit(const char **str)
{
	int digit;

	if (ft_isdigit(**str))
	{
		digit = (int)**str - 48;
		(*str)++;
		return (digit);
	}
	else
	{
		return (-1);
	}
}

int		overflow(int sign, int old, int new)
{
	if (sign > 0)
	{
		return (new < old);
	}
	else
	{
		return (new > old);
	}
}

int		ft_atoi(const char *str)
{
	int sign;
	int	digit;
	int	old_result;
	int result;

	skip_spaces(&str);
	sign = parse_sign(&str);
	result = 0;
	digit = 0;
	while (digit >= 0)
	{
		old_result = result;
		result *= 10;
		result += digit * sign;
		if (overflow(sign, old_result, result))
		{
			return (sign > 0 ? (int)LONG_MAX : (int)LONG_MIN);
		}
		digit = parse_digit(&str);
	}
	return (result);
}
