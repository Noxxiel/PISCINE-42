/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bferreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 01:01:00 by bferreir          #+#    #+#             */
/*   Updated: 2018/07/13 01:13:45 by bferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_antidote(int i, int j, int k)
{
	if ((i >= j && i <= k) || (i <= j && i >= k))
		return (i);
	if ((j >= i && j <= k) || (j <= i && j <= k))
		return (j);
	if ((k >= i && k <= j) || (k <= i && k >= j))
		return (k);
	return (0);
}
