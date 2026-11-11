/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdguerm <abdguerm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 00:08:36 by abdguerm          #+#    #+#             */
/*   Updated: 2026/08/23 09:47:23 by abdguerm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb == 1 || nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	result = nb;
	result = result * ft_recursive_factorial(nb - 1);
	return (result);
}
