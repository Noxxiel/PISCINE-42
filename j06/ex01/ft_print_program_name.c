/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bferreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 22:04:53 by bferreir          #+#    #+#             */
/*   Updated: 2018/07/21 21:45:25 by bferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;

	(void)argc;
	i = 0;
	while (argv[0][i] != '\0')
		ft_putchar(argv[0][i++]);
	ft_putchar('\n');
	return (0);
}
