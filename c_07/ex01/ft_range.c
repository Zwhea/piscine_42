/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 12:57:28 by twang             #+#    #+#             */
/*   Updated: 2022/07/27 22:00:40 by twang            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	index;
	int	size;

	size = max - min;
	if (min >= max)
		return (NULL);
	if (size < 0)
		size *= -1;
	array = (int *) malloc(sizeof(int) * size);
	index = 0;
	if (!array)
		return ((void *)0);
	while (index < size)
		array[index++] = min++;
	return (array);
}
