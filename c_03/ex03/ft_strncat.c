/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 14:21:26 by twang             #+#    #+#             */
/*   Updated: 2022/07/15 11:14:39 by twang            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	ft_strlen(char *dest)
{
	int	i;

	i = 0;
	while (dest[i])
		i++;
	return (i);
}

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
