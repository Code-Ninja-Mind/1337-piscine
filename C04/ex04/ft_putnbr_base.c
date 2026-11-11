/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdguerm <abdguerm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 03:42:54 by abdguerm          #+#    #+#             */
/*   Updated: 2026/08/29 22:16:53 by abdguerm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int nbr, int base_len, char *base)
{
	char	prin[32] = {0};
	long	n;
	int		i;

	n = nbr;
	if (n == 0)
		write(1, &base[0], 1);
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	i = 0;
	while (n > 0)
	{
		prin[i] = base[n % base_len];
		n /= base_len;
		i++;
	}
	while (i > 0)
		write(1, &prin[--i], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_value;
	int	j;

	base_value = 0;
	while (base[base_value])
	{
		if (base[base_value] == '+' || base[base_value] == '-')
			return ;
		j = base_value + 1;
		while (base[j])
		{
			if (base[base_value] == base[j])
				return ;
			j++;
		}
		base_value++;
	}
	if (base_value < 2)
		return ;
	print(nbr, base_value, base);
}
