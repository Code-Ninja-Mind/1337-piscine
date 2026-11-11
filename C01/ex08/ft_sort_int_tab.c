/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdguerm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 02:51:28 by abdguerm          #+#    #+#             */
/*   Updated: 2026/08/15 02:51:32 by abdguerm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *a, int *b)
{
	int	buff;

	buff = *a;
	*a = *b;
	*b = buff;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	j;
	int	flag;

	flag = 1;
	j = 0;
	while (flag)
	{
		j = 0;
		flag = 0;
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				ft_swap(&tab[j], &tab[j + 1]);
				flag = 1;
			}
			j++;
		}
	}
}
