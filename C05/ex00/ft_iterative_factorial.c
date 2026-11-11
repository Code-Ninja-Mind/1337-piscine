/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdguerm <abdguerm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 00:08:16 by abdguerm          #+#    #+#             */
/*   Updated: 2026/08/23 09:46:30 by abdguerm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb == 1 || nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	result = nb;
	while (nb > 1)
	{
		result = (result) * (nb - 1);
		nb--;
	}
	return (result);
}
