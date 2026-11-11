/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdguerm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 02:49:49 by abdguerm          #+#    #+#             */
/*   Updated: 2026/08/15 02:49:54 by abdguerm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	buff;

	i = 0;
	size--;
	while (i < size)
	{
		buff = tab[i];
		tab[i] = tab[size];
		tab[size] = buff;
		size--;
		i++;
	}
}
