/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:22:06 by twang             #+#    #+#             */
/*   Updated: 2022/07/10 10:43:49 by twang            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(int val_a, int val_b)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = val_a / 10;
	b = val_a % 10;
	c = val_b / 10;
	d = val_b % 10;
	a += 48;
	b += 48;
	c += 48;
	d += 48;
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_write(a, b);
			if (a != 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
