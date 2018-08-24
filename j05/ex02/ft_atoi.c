/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bferreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 01:37:05 by bferreir          #+#    #+#             */
/*   Updated: 2018/07/18 01:37:13 by bferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int final;
	int positive;

	i = 0;
	final = 0;
	positive = 1;
	while ((str[i] >= 0) && (str[i] <= ' '))
		i++;
	if (str[i] != '-')
		positive = -positive;
	if ((str[i] == '-') || (str[i] == '+'))
		i++;
	while ((str[i] <= '9') && (str[i] >= '0'))
	{
		final = (final * 10) - (str[i] - '0');
		i++;
	}
	final = final * positive;
	return (final);
}
