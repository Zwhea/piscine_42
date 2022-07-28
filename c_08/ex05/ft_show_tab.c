/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 09:37:45 by twang             #+#    #+#             */
/*   Updated: 2022/07/28 10:59:32 by twang            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putnbr_print(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr_print(147483648);
	}
	else if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar('-');
		ft_putnbr_print(nb);
	}
	else if (nb < 10)
	{
		ft_putchar(nb + 48);
	}
	else
	{
		ft_putnbr_print(nb / 10);
		ft_putnbr_print(nb % 10);
	}
}

void	ft_print_char(char *a)
{
	int	i;

	i = 0;
	while (a[i])
	{
		ft_putchar(a[i]);
		i++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_print_char(par[i].str);
		ft_putchar('\n');
		ft_putnbr_print(par[i].size);
		ft_putchar('\n');
		ft_print_char(par[i].copy);
		ft_putchar('\n');
		i++;
	}
}
