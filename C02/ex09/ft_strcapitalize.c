/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdguerm <abdguerm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 23:25:00 by abdguerm          #+#    #+#             */
/*   Updated: 2026/08/18 13:51:20 by abdguerm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_upper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	is_lower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	is_alphanumeric(char c)
{
	if (is_upper(c) || is_lower(c) || (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (str[i])
	{
		if (is_lower(str[i]) && flag)
			str[i] = str[i] - 32;
		else if (is_upper(str[i]) && !flag)
			str[i] = str[i] + 32;
		if (is_alphanumeric(str[i]))
			flag = 0;
		else
			flag = 1;
		i++;
	}
	return (str);
}
