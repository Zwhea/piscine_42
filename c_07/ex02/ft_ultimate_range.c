/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 14:08:19 by twang             #+#    #+#             */
/*   Updated: 2022/07/27 22:07:10 by twang            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	index;
	int	size;

	size = max - min;
	if (size < 0)
		size *= -1;
	array = (int *)malloc(sizeof(int) * size);
	index = 0;
	if (!array)
		return (-1);
	if (min >= max)
		return (0);
	while (index < size)
		array[index++] = min++;
	*range = array;
	return (size);
}
