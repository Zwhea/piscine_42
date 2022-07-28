/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:55:49 by twang             #+#    #+#             */
/*   Updated: 2022/07/20 18:51:29 by twang            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		ft_putchar(str[index]);
		index++;
	}
}

int	main(int argc, char **argv)
{
	while (argc > 1)
	{
		ft_putstr(argv[argc - 1]);
		ft_putchar('\n');
		argc--;
	}
	return (0);
}
