/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdguerm <abdguerm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 18:41:17 by abdguerm          #+#    #+#             */
/*   Updated: 2026/08/22 22:53:47 by abdguerm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swap_pointers(char **s1, char **s2)
{
	char	*buff;

	buff = *s1;
	*s1 = *s2;
	*s2 = buff;
}

void	ft_print(char **str, int size)
{
	int	i;
	int	j;

	i = 1;
	while (i < size)
	{
		j = 0;
		while (str[i][j])
		{
			write(1, &str[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	flag;
	int	cmp;

	i = 1;
	flag = 1;
	while (flag)
	{
		i = 1;
		flag = 0;
		while (i < argc - 1)
		{
			cmp = ft_strcmp(argv[i], argv[i + 1]);
			if (cmp > 0)
			{
				ft_swap_pointers(&argv[i], &argv[i + 1]);
				flag = 1;
			}
			i++;
		}
	}
	ft_print(argv, argc);
	return (0);
}
