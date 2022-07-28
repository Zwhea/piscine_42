/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 11:19:59 by twang             #+#    #+#             */
/*   Updated: 2022/07/27 10:06:45 by twang            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		nb = 147483648;
	}
	if (nb >= 0 && nb < 10)
		ft_putchar(nb + 48);
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb *(-1));
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
