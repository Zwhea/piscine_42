/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:46:52 by twang             #+#    #+#             */
/*   Updated: 2022/07/27 22:41:10 by twang            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *strs)
{
	int	index;

	index = 0;
	while (strs[index])
		index++;
	return (index);
}

char	*str_assemble(int size, char **strs, char *sep, char *result)
{
	int	index;
	int	k;
	int	j;

	index = -1;
	k = 0;
	while (++index < size)
	{
		j = 0;
		while (strs[index][j])
			result[k++] = strs[index][j++];
		if (index != size - 1)
		{
			j = 0;
			while (sep[j])
				result[k++] = sep[j++];
		}
	}
	result[k] = '\0';
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		index;
	char	*result;
	int		total_size;

	index = 0;
	total_size = 0;
	if (size == 0)
	{
		result = (char *) malloc(sizeof(char));
		result[0] = '\0';
		return (result);
	}
	while (index < size)
	{
		total_size += ft_strlen(strs[index]);
		index++;
	}
	result = (char *) malloc(sizeof(char)
			* (total_size + ft_strlen(sep) * (size - 1) + 1));
	result = str_assemble(size, strs, sep, result);
	return (result);
}
int main()
{
	char *a[] = 
	{
		"bonjour",
		"test",
		"",
		"non",
		"bouh",
		"blergh"
	};
	char *b = "";
	printf("%s\n", ft_strjoin(6, a, b));
}
