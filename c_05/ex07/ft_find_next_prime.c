/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 11:36:52 by twang             #+#    #+#             */
/*   Updated: 2022/07/20 14:16:19 by twang            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	index;

	index = 3;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0 || nb % 5 == 0)
		return (0);
	while (nb / index >= index)
	{
		if (nb % index == 0)
			return (0);
		index += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (ft_is_prime(nb) == 1)
		return (nb);
	else
		return (ft_find_next_prime(nb + 1));
}
