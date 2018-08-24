/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bferreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 22:26:56 by bferreir          #+#    #+#             */
/*   Updated: 2018/07/18 22:06:40 by bferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = argc - 1;
	j = 0;
	while (i >= 1)
	{
		while (argv[i][j] != '\0')
			ft_putchar(argv[i][j++]);
		ft_putchar('\n');
		i--;
		j = 0;
	}
	return (0);
}
