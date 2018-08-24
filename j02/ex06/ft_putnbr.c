/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bferreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 14:51:28 by bferreir          #+#    #+#             */
/*   Updated: 2018/07/08 22:42:58 by bferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_for_the_smallest_nb(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	return (nb);
}

int		ft_find_negative_nb(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	return (nb);
}

void	ft_putnbr(int nb)
{
	int length;
	int temp;
	int scale;

	if (nb != -2147483648)
		nb = ft_find_negative_nb(nb);
	nb = ft_for_the_smallest_nb(nb);
	temp = nb;
	length = 0;
	scale = 1;
	while (nb / 10 >= 1)
	{
		nb = nb / 10;
		length++;
	}
	while (length-- > 0)
		scale = scale * 10;
	nb = temp;
	while (scale >= 1)
	{
		ft_putchar(48 + nb / scale % 10);
		scale /= 10;
	}
}
