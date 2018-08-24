/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bferreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 01:11:59 by bferreir          #+#    #+#             */
/*   Updated: 2018/07/10 17:10:02 by bferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int final;
	int negative;

	i = 0;
	final = 0;
	negative = 1;
	while ((str[i] >= 0) && (str[i] <= ' '))
		i++;
	if (str[i] == '-')
		negative = -negative;
	if ((str[i] == '-') || (str[i] == '+'))
		i++;
	while ((str[i] <= '9') && (str[i] >= '0'))
	{
		final = (final * 10) + (str[i] - 48);
		i++;
	}
	final = final * negative;
	return (final);
}
