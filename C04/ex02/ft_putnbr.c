/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdguerm <abdguerm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 03:19:02 by abdguerm          #+#    #+#             */
/*   Updated: 2026/08/23 03:19:06 by abdguerm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		div;
	long	n;
	char	c;

	n = nb;
	div = 1;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	while (n / div > 9)
		div *= 10;
	while (div > 0)
	{
		c = (n / div) + '0';
		write(1, &c, 1);
		n %= div;
		div /= 10;
	}
}
