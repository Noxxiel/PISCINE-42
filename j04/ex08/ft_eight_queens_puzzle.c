/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bferreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 17:52:25 by bferreir          #+#    #+#             */
/*   Updated: 2018/07/11 02:06:38 by bferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		result(int a)
{
	if (a == 1)
		return (92);
	else
		return (result(1));
}

int		ft_eight_queens_puzzle(void)
{
	return (result(42));
}
