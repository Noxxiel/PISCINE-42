/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bferreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 17:39:17 by bferreir          #+#    #+#             */
/*   Updated: 2018/07/26 04:51:26 by bferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int						ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char					*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	while (src[i] != '\0')
		i++;
	dest = (char*)malloc(sizeof(*dest) * i);
	dest = src;
	return (dest);
}

struct s_stock_par		*ft_param_to_tab(int ac, char **av)
{
	int				i;
	t_stock_par		*ptr;

	if ((ptr = (t_stock_par*)malloc(sizeof(t_stock_par)
					* (ac + 1))) == 0)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		ptr[i].size_param = ft_strlen(av[i]);
		ptr[i].str = av[i];
		ptr[i].copy = ft_strdup(av[i]);
		ptr[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	ptr[i].str = 0;
	return (ptr);
}
