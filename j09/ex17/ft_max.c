/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bferreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 16:30:22 by bferreir          #+#    #+#             */
/*   Updated: 2018/07/13 16:33:42 by bferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_max(int *tab, int lenght)
{
	int i;
	int temp;

	i = 0;
	temp = 0;
	while (i < lenght - 1)
	{
		if (tab[i + 1] >= tab[i])
			i++;
		else
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
	}
	return (tab[lenght - 1]);
}
