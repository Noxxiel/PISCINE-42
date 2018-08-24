/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bferreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 20:58:11 by bferreir          #+#    #+#             */
/*   Updated: 2018/07/25 21:03:46 by bferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		find_nb_words(char *str)
{
	int i;
	int nb_words;

	i = 0;
	nb_words = 0;
	while (str[i] != '\0')
	{
		while ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
				&& (str[i] != '\0'))
			i++;
		if (str[i] != '\0' && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			nb_words++;
			i++;
		}
		while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t'
				&& str[i] != '\n')
			i++;
	}
	return (nb_words);
}

int		ft_strlenbis(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		i++;
	return (i);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab_str;
	int		i;
	int		x;
	int		y;

	i = 0;
	x = 0;
	if ((tab_str = (char**)malloc(sizeof(char*)
					* (find_nb_words(str) + 1))) == 0)
		return (NULL);
	while (str[i] != '\0')
	{
		while ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
				&& (str[i] != '\0'))
			i++;
		y = 0;
		tab_str[x] = (char*)malloc(sizeof(char)
				* (ft_strlenbis(str + i) + 1));
		while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t'
				&& str[i] != '\n')
			tab_str[x][y++] = str[i++];
		tab_str[x++][y] = '\0';
	}
	tab_str[find_nb_words(str)] = 0;
	return (tab_str);
}
