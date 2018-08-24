/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sudoku.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 17:39:15 by erli              #+#    #+#             */
/*   Updated: 2018/07/14 17:40:58 by erli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SUDOKU_H
# define FT_SUDOKU_H

typedef	struct	s_case
{
	int x;
	int y;
	int block;
	int value;
	int lock;
	int *hyp;
}				t_case;
#endif
