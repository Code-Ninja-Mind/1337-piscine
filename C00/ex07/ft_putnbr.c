/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdguerm <abdguerm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 23:02:49 by abdguerm          #+#    #+#             */
/*   Updated: 2026/08/26 18:45:01 by abdguerm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
