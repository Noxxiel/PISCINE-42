/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle04.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bferreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 13:27:28 by bferreir          #+#    #+#             */
/*   Updated: 2018/07/21 15:03:00 by bferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(int a, int b, int x, int y)
{
	if (((b == 0 && a == 0) || (b == y - 1 && a == x - 1))
			&& (y != 1 || a != x - 1) && (x != 1 || b != y - 1))
		ft_putchar('A');
	else if ((b == 0 && a == x - 1) || (b == y - 1 && a == 0))
		ft_putchar('C');
	else if (b == 0 || b == y - 1 || a == 0 || a == x - 1)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	colle(int x, int y)
{
	int a;
	int b;

	b = 0;
	if (x <= 0 || y <= 0)
	{
		ft_putchar('\n');
		return ;
	}
	while (b < y)
	{
		a = 0;
		while (a < x)
		{
			ft_print(a, b, x, y);
			a++;
		}
		ft_putchar('\n');
		b++;
	}
}
