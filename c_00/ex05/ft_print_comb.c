/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 12:47:25 by twang             #+#    #+#             */
/*   Updated: 2022/07/07 17:15:56 by twang            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(int a, int b, int c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != 55)
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 48;
	b = 48;
	c = 48;
	while (a <= 55)
	{
		b = a + 1;
		while (b <= 56)
		{
			c = b + 1;
			while (c <= 57)
			{
				ft_write(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
