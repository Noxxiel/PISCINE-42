/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bferreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 16:48:00 by bferreir          #+#    #+#             */
/*   Updated: 2018/07/25 21:06:12 by bferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *dest;
	int i;
	int size;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if ((dest = (int*)malloc(sizeof(*dest) * (max - min))) == 0)
	{
		*range = NULL;
		return (0);
	}
	while (min < max)
		dest[i++] = min++;
	*range = dest;
	return (size);
}
