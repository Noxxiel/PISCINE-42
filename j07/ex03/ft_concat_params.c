/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bferreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 14:27:58 by bferreir          #+#    #+#             */
/*   Updated: 2018/07/25 20:51:34 by bferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_calc_coeff_malloc(int argc, char **argv)
{
	int i;
	int j;
	int coeff_malloc;

	i = 1;
	coeff_malloc = 0;
	while (i < argc - 1)
	{
		j = 0;
		while (argv[i][j] != '\0')
			j++;
		coeff_malloc += j + 1;
		i++;
	}
	return (coeff_malloc);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	char	*dest;

	i = 1;
	k = 0;
	if ((dest = (char*)malloc(sizeof(*dest)
					* ft_calc_coeff_malloc(argc, argv))) == 0)
		return (NULL);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
			dest[k++] = argv[i][j++];
		i++;
		dest[k++] = '\n';
	}
	dest[k - 1] = '\0';
	return (dest);
}
