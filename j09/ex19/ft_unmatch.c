/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bferreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 16:25:53 by bferreir          #+#    #+#             */
/*   Updated: 2018/07/13 16:29:43 by bferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sort_integer_table(int *tab, int size)
{
	int i;
	int temp;

	i = 0;
	temp = 0;
	while (i < size - 1)
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
	return (*tab);
}

int		ft_unmatch(int *tab, int length)
{
	int i;

	i = 0;
	ft_sort_integer_table(tab, length);
	while (i < length - 1)
	{
		if (tab[i] != tab[i - 1] && tab[i] != tab[i + 1])
			return (tab[i]);
		if (tab[length - 1] != tab[length - 2])
			return (tab[length - 1]);
		if (tab[i] == tab[i - 1] && tab[i] == tab[i + 1])
			return (tab[i]);
		i++;
	}
	return (0);
}
