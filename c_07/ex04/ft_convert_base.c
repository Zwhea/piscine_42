/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:57:24 by twang             #+#    #+#             */
/*   Updated: 2022/07/27 08:35:11 by twang            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *base)
{
	int	index;

	index = 0;
	while (base[index])
		index++;
	return (index);
}

int	check_base_validity(char *base)
{
	int	index;
	int	comp_index;
	int	base_size;

	index = 0;
	base_size = ft_strlen(base);
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[index])
	{
		if (base[index] == 43 || base[index] == 45)
			return (0);
		if (base[index] == 32 || (base[index] >= 9 && base[index] <= 13))
			return (0);
		comp_index = index + 1;
		while (base[comp_index])
		{
			if (base[index] == base[comp_index])
				return (0);
			comp_index++;
		}
		index++;
	}
	return (1);
}

int	find_char(char c, char *base)
{
	int	index;

	index = 0;
	while (base[index])
	{
		if (base[index] == c)
			return (index);
		index++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	base_size;
	int	index;
	int	sign;
	int	result;

	result = 0;
	index = 0;
	sign = 1;
	base_size = ft_strlen(base);
	if (check_base_validity(base) == 0)
		return (0);
	while (str[index] && (str[index] == 32
			|| (str[index] >= 9 && str[index] <= 13)))
		index++;
	while (str[index] == 43 || str[index] == 45)
		if (str[index++] == 45)
			sign *= -1;
	while (str[index] && find_char(str[index], base) != -1)
	{
		result = (result * base_size) + (find_char(str[index], base));
		index++;
	}
	return (sign * result);
}
