/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdguerm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 22:57:57 by abdguerm          #+#    #+#             */
/*   Updated: 2026/08/14 22:58:02 by abdguerm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print(int n)
{
	char	c;

	if (n > 9)
	{
		c = (n / 10) + '0';
		write(1, &c, 1);
		c = (n % 10) + '0';
		write(1, &c, 1);
	}
	else
	{
		write(1, "0", 1);
		c = n + '0';
		write(1, &c, 1);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			print(a);
			write(1, " ", 1);
			print(b);
			if (a != 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
