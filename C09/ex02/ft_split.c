/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdguerm <abdguerm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 19:06:05 by abdguerm          #+#    #+#             */
/*   Updated: 2026/10/22 13:54:25 by abdguerm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char *sep, char c)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (c == sep[i])
			return (1);
		i++;
	}
	return (0);
}

int	arr_pointers(char *str, char *sep)
{
	int	i;
	int	count;
	int	flag;

	i = 0;
	count = 0;
	flag = 1;
	while (str[i])
	{
		while (str[i] && !(is_sep(sep, str[i])))
		{
			flag = 1;
			i++;
		}
		if (flag)
			count++;
		flag = 0;
		if (str[i])
			i++;
	}
	return (count + 1);
}

char	*sub_string(char *str, int index, char *sep)
{
	char	*sub;
	int		count;
	int		i;

	i = index;
	count = 0;
	while (str[i] && !(is_sep(sep, str[i])))
	{
		count++;
		i++;
	}
	sub = malloc(sizeof(char) * (count + 1));
	if (sub == NULL)
		return (NULL);
	i = 0;
	while (i < count)
	{
		sub[i] = str[index + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		flag;
	char	**s;

	i = 0;
	j = 0;
	flag = 1;
	s = malloc((arr_pointers(str, charset)) * sizeof(char *));
	if (s == NULL)
		return (NULL);
	while (str[i])
	{
		if (!(is_sep(charset, str[i])) && str[i] && flag)
		{
			s[j] = sub_string(str, i, charset);
			j++;
			flag = 0;
		}
		if (is_sep(charset, str[i]))
			flag = 1;
		i++;
	}
	s[j] = NULL;
	return (s);
}


