/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bferreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 23:47:18 by bferreir          #+#    #+#             */
/*   Updated: 2018/07/09 18:07:08 by bferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_put_final_numbers(int i, int j)
{
	ft_putchar((i / 10) + 48);
	ft_putchar((i % 10) + 48);
	ft_putchar(' ');
	ft_putchar((j / 10) + 48);
	ft_putchar((j % 10) + 48);
	if (i * j != 9702)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;
	int i;

	a = 0;
	b = 1;
	i = 2;
	while (a <= 98)
	{
		while (b <= 99)
		{
			ft_put_final_numbers(a, b);
			b++;
		}
		b = i;
		i++;
		a++;
	}
}
