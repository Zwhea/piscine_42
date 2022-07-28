/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 19:46:41 by twang             #+#    #+#             */
/*   Updated: 2022/07/28 13:40:22 by twang            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);
int	check_base_validity(char *base);
int	ft_strlen(char *base);
int	find_char(char c, char *base);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = ft_strlen(dest);
	j = 0;
	if (nb == 0)
		return (dest);
	while (src[j] && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = ft_strlen(dest);
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

void	ft_putnbr_stock(int nbr, char *base_from, char *str)
{
	int			base_length;
	long int	nb;

	base_length = ft_strlen(base_from);
	nb = nbr;
	if (nbr < 0)
	{
		ft_strcat(str, "-");
		nb *= -1;
	}
	if (nb > base_length - 1)
	{
		ft_putnbr_stock(nb / base_length, base_from, str);
		ft_putnbr_stock(nb % base_length, base_from, str);
	}
	else
		ft_strncat(str, &base_from[nb], 1);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		number;
	char	*number_str;
	int		max;
	int		count;

	if (!check_base_validity(base_from) || !nbr
		|| !check_base_validity(base_to))
		return (NULL);
	number = ft_atoi_base(nbr, base_from);
	max = 1;
	count = 1;
	while (max < number)
	{
		max *= ft_strlen(base_to);
		count++;
	}
	if (number < 0)
		count++;
	number_str = (char *)malloc(sizeof(char) * count + 2);
	if (!number_str)
		return (0);
	ft_putnbr_stock(number, base_to, number_str);
	number_str[count - 1] = '\0';
	return (number_str);
}

#include <stdio.h>
int	main(void)
{
	char	nbr[] = "-108";
	char	base_from[] = "0123456789";
	char	base_to[] = "0123456789abcdef";
	printf("%s", ft_convert_base(nbr, base_from,base_to));
}
