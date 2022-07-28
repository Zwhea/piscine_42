/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 16:08:24 by twang             #+#    #+#             */
/*   Updated: 2022/07/27 10:04:53 by twang            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_whitespace(char a)
{
	if (a == 32 || (a >= 9 && a <= 13))
		return (1);
	return (0);
}

int	ft_is_number(char b)
{
	if (b >= '0' && b <= '9')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] && ft_is_whitespace(str[i]) == 1)
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	while (str[i] && ft_is_number(str[i]) == 1)
	{
		result = (result * 10) + str[i] - 48;
		i++;
	}
	return (sign * result);
}
