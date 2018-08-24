/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bferreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 16:32:41 by bferreir          #+#    #+#             */
/*   Updated: 2018/07/13 16:36:14 by bferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		compare_string(char *chaine, char *str1)
{
	int i;
	int j;
	int k;

	k = 0;
	j = 0;
	i = 0;
	while (chaine[k])
		k++;
	while (chaine[i])
	{
		while ((chaine[i] == str1[j] || chaine[i] + 32 == str1[j]
					|| chaine[i] - 32 == str1[j] || chaine[i] == str1[j] + 32
					|| chaine[i] == str1[j] - 32))
		{
			i++;
			j++;
			if (str1[j] == '\0')
				return (1);
		}
		j = 0;
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		i;
	char	*str1;
	char	*str2;
	char	*str3;

	str1 = "president";
	str2 = "attack";
	str3 = "Bauer";
	i = 1;
	while (i < argc)
	{
		if ((compare_string(argv[i], str1)) == 1)
			ft_putstr("Alert!!!");
		if ((compare_string(argv[i], str2)) == 1)
			ft_putstr("Alert!!!");
		if ((compare_string(argv[i], str3)) == 1)
			ft_putstr("Alert!!!");
		i++;
	}
	return (0);
}
