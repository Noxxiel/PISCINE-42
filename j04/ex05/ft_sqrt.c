/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bferreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 21:10:41 by bferreir          #+#    #+#             */
/*   Updated: 2018/07/11 02:20:02 by bferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int root;

	root = 1;
	while (root * root < nb)
	{
		root++;
	}
	if (root * root == nb)
		return (root);
	else
		return (0);
}
