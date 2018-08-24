/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bferreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 18:53:10 by bferreir          #+#    #+#             */
/*   Updated: 2018/07/11 01:02:46 by bferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int value;

	if ((nb < 0) || (nb > 12))
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	value = nb;
	return (value * ft_recursive_factorial(nb - 1));
}
