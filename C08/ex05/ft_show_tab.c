/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdguerm <abdguerm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 18:48:30 by abdguerm          #+#    #+#             */
/*   Updated: 2026/08/26 19:10:55 by abdguerm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	print(int div, long nbr)
{
	char	c;

	while (div > 0)
	{
		c = (nbr / div) + '0';
		write(1, &c, 1);
		nbr %= div;
		div /= 10;
	}
}

void	ft_putnbr(int nb)
{
	long	nbr;
	int		div;

	div = 1;
	nbr = nb;
	if (nbr < 0)
	{
		nbr = -nbr;
		write(1, "-", 1);
	}
	while ((nbr / div) > 9)
		div *= 10;
	print(div, nbr);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr((par[i]).str);
		write(1, "\n", 1);
		ft_putnbr((par[i]).size);
		write(1, "\n", 1);
		ft_putstr((par[i]).copy);
		write(1, "\n", 1);
		i++;
	}
}
