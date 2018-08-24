/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bferreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 23:14:49 by bferreir          #+#    #+#             */
/*   Updated: 2018/07/25 21:05:04 by bferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	while (src[i] != '\0')
		i++;
	if ((dest = (char*)malloc(sizeof(*dest) * (i + 1))) == 0)
		return (NULL);
	while (i >= 0)
	{
		dest[i] = src[i];
		i--;
	}
	return (dest);
}
