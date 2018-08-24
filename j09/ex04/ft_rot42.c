/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bferreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 23:14:53 by bferreir          #+#    #+#             */
/*   Updated: 2018/07/13 16:37:48 by bferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'j'))
			str[i] += 16;
		else if ((str[i] >= 'A') && (str[i] <= 'J'))
			str[i] += 16;
		else if ((str[i] >= 'k') && (str[i] <= 'z'))
			str[i] -= 10;
		else if ((str[i] >= 'K') && (str[i] <= 'Z'))
			str[i] -= 10;
		i++;
	}
	return (str);
}
