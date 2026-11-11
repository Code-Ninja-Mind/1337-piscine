/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdguerm <abdguerm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 13:54:07 by abdguerm          #+#    #+#             */
/*   Updated: 2026/08/18 13:54:08 by abdguerm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hex(unsigned char c)
{
	char	*base;
	int		high_digit;
	int		low_digit;

	base = "0123456789abcdef";
	write(1, "\\", 1);
	high_digit = (c / 16);
	write(1, &base[high_digit], 1);
	low_digit = (c % 16);
	write(1, &base[low_digit], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		else
			print_hex(str[i]);
		i++;
	}
}
