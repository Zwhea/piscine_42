/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 18:21:31 by twang             #+#    #+#             */
/*   Updated: 2022/07/27 10:07:21 by twang            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

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
	int	base_size;
	int	index;
	int	index_comp;

	index = 0;
	base_size = ft_strlen(base);
	if (base_size < 2)
		return (0);
	while (base[index])
	{
		if (base[index] == 43 || base[index] == 45)
			return (0);
		index_comp = index + 1;
		while (base[index_comp])
		{
			if (base[index] == base[index_comp])
				return (0);
			index_comp++;
		}
		index++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			base_size;
	long int	nb;

	nb = nbr;
	base_size = ft_strlen(base);
	if (check_base_validity(base) == 0)
		return ;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 0 && nb < base_size)
		ft_putchar(base[nb]);
	else
	{
		ft_putnbr_base(nb / base_size, base);
		ft_putnbr_base(nb % base_size, base);
	}
}
