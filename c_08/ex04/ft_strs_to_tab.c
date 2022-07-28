/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 08:40:06 by twang             #+#    #+#             */
/*   Updated: 2022/07/28 09:36:53 by twang            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	index;

	index = 0;
	while (src[index])
		index++;
	return (index);
}

char	*ft_strdup(char *src, int size)
{
	int		i;
	char	*src_duplicate;

	i = 0;
	src_duplicate = malloc(sizeof(char) * (size + 1));
	while (src[i])
	{
		src_duplicate[i] = src[i];
		i++;
	}
	src_duplicate[i] = '\0';
	return (src_duplicate);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*tab;

	i = 0;
	tab = malloc (sizeof(struct s_stock_str) * (1 + ac));
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i], ft_strlen(av[i]));
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
