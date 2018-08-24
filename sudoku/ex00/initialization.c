/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialization.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bferreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 23:22:03 by bferreir          #+#    #+#             */
/*   Updated: 2018/07/15 00:27:51 by bferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sudoku.h"

void	ft_ini(char *tab)
{
	int nb;
	int pos_x;
	int pos_y;
	int pos_y_block;

	nb = 0;
	pos_x = 0;
	pos_y = 0;
	while (nb < 81)
	{
		t_case nb;

		nb.x = pos_x++;
		if (pos_x % 9 == 0)
			pos_x = 0;
		if (pos_y % 9 == 0 && pos_y != 0)
			pos_y++;
		nb.y = pos_y;
		nb.block = 3 * (nb.y / 3) + nb.x / 3;
		nb.value = tab[nb];
		if (nb.value != 0)
			nb.lock = 1;
		else
			nb.lock = 0;
		nb.*hyp = (malloc(sizeof(int) * 10));
	}
}
