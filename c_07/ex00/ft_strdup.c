/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 10:18:51 by twang             #+#    #+#             */
/*   Updated: 2022/07/27 18:49:13 by twang            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	index;

	index = 0;
	while (src[index])
		index++;
	return (index);
}

char	*ft_strdup(char *src)
{
	int		index;
	int		size;
	char	*src_duplicate;

	index = 0;
	size = ft_strlen(src);
	src_duplicate = malloc(sizeof(char) * size + 1);
	if (!src_duplicate)
		return (NULL);
	while (src[index])
	{
		src_duplicate[index] = src[index];
		index++;
	}
	src_duplicate[index] = '\0';
	return (src_duplicate);
}
