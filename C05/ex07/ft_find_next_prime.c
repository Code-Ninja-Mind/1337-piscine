/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdguerm <abdguerm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 08:38:20 by abdguerm          #+#    #+#             */
/*   Updated: 2026/08/29 10:22:36 by abdguerm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;
	int	flag;

	flag = 1;
	while (flag)
	{
		i = 2;
		while (i < nb)
		{
			if (nb % i == 0)
				break ;
			i++;
		}
		if (nb % i == 0 && i == nb)
			return (nb);
		nb++;
	}
	return (nb);
}
