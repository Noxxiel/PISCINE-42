/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bferreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 23:54:08 by bferreir          #+#    #+#             */
/*   Updated: 2018/07/25 20:15:07 by bferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int j;
	int *dest;

	j = 0;
	if (min >= max)
		return (NULL);
	if ((dest = (int*)malloc(sizeof(*dest) * (max - min))) == 0)
		return (NULL);
	while (min < max)
		dest[j++] = min++;
	return (dest);
}
