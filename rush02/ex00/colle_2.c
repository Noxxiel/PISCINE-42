/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle-2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhammere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 17:24:20 by qhammere          #+#    #+#             */
/*   Updated: 2018/07/22 13:55:46 by qhammere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);
void	ft_putnbr(int n);

void	ft_useless1(int c, int x, int y)
{
	if (c == 2)
	{
		ft_putstr("[colle-02] [");
		ft_putnbr(x);
		ft_putstr("] [");
		ft_putnbr(y);
		ft_putstr("]");
		if (x == 1 && y == 1)
			ft_putstr(" || [colle-03] [1] [1] || [colle-04] [1] [1]");
		else if (x == 1)
		{
			ft_putstr(" || [colle-04] [1] [");
			ft_putnbr(y);
			ft_putstr("]");
		}
	}
	if (c == 4)
	{
		ft_putstr("[colle-04] [");
		ft_putnbr(x);
		ft_putstr("] [");
		ft_putnbr(y);
		ft_putstr("]");
	}
}

void	ft_useless2(int x, int y)
{
	ft_putstr("[colle-03] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("]");
	if (y == 1)
	{
		ft_putstr(" || [colle-04] [");
		ft_putnbr(x);
		ft_putstr("] [1]");
	}
}

void	ft_print_res(int c, int x, int y) // c = numero de la colle argv[0][9]
{
	if (x > 0 && y > 0)
	{
		if (c == 0 || c == 1)
		{
			if (c == 0)
				ft_putstr("[colle-00] [");
			else
				ft_putstr("[colle-01] [");
			ft_putnbr(x);
			ft_putstr("] [");
			ft_putnbr(y);
			ft_putstr("]");
		}
		else if (c == 2)
			ft_useless1(c, x, y);
		else if (c == 3)
			ft_useless2(x, y);
		else if (c == 4)
			ft_useless1(c, x, y);
	}
	else
		ft_putstr("aucune");
	ft_putstr("\n");
}
