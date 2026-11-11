/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdguerm <abdguerm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 18:48:23 by abdguerm          #+#    #+#             */
/*   Updated: 2026/08/31 20:59:24 by abdguerm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_copy(char *str, int size)
{
	int		i;
	char	*copy;

	i = 0;
	copy = malloc(sizeof(char) * (size + 1));
	if (copy == NULL)
		return (NULL);
	while (str[i])
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

void	free_copy(t_stock_str *s, int index)
{
	while (index >= 0)
	{
		free((s)[index].copy);
		index--;
	}
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	int			len;
	t_stock_str	*arr;

	arr = malloc((ac + 1) * sizeof(t_stock_str));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		len = ft_strlen(av[i]);
		(arr)[i].size = len;
		(arr)[i].str = av[i];
		(arr)[i].copy = ft_copy(av[i], len);
		if ((arr)[i].copy == NULL)
		{
			free_copy(arr, i);
			free(arr);
			return (NULL);
		}
		i++;
	}
	(arr)[i].str = 0;
	return (arr);
}
