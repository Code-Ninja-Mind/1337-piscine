/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdguerm <abdguerm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 17:30:05 by abdguerm          #+#    #+#             */
/*   Updated: 2026/08/30 16:39:56 by abdguerm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_arr_size(char **str, int sep_count, char *sep, int arr_buffer)
{
	int	i;
	int	size;

	size = 0;
	i = 0;
	while (i < arr_buffer)
	{
		size = size + ft_strlen(str[i]);
		i++;
	}
	size = size + (ft_strlen(sep) * sep_count) + 1;
	return (size);
}

char	*ft_fill(char *str, char **src, char *sep, int size)
{
	int	i;
	int	j;
	int	index;

	i = 0;
	index = 0;
	while (i < size)
	{
		j = 0;
		while (src[i][j])
			str[index++] = src[i][j++];
		str[index] = '\0';
		j = 0;
		while (sep[j])
		{
			if (i + 1 == size)
				break ;
			str[index] = sep[j];
			index++;
			j++;
		}
		i++;
	}
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		sep_count;
	int		arr_size;
	char	*s;

	if (size == 0)
	{
		s = malloc(1);
		if (!s)
			return (NULL);
		*s = '\0';
		return (s);
	}
	sep_count = size - 1;
	arr_size = ft_arr_size(strs, sep_count, sep, size);
	s = malloc(sizeof(char) * arr_size);
	if (s == NULL)
		return (NULL);
	s = ft_fill(s, strs, sep, size);
	return (s);
}
