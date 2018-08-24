/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bferreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 12:37:22 by bferreir          #+#    #+#             */
/*   Updated: 2018/07/22 13:47:56 by qhammere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	colle(int a, int b);

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
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		final = (final * 10) - (str[i] - '0');
		i++;
	}
	final = final * positive;
	return (final);
}

int		main(int argc, char **argv)
{
	(void)argc;
	colle(ft_atoi(argv[1]), ft_atoi(argv[2]));
	return (0);
}
