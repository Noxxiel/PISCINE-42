/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bferreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 00:04:50 by bferreir          #+#    #+#             */
/*   Updated: 2018/07/18 01:27:48 by bferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_init(char first)
{
	if (first >= 'a' && first <= 'z')
		first -= 32;
	return (first);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 1;
	str[0] = ft_init(str[0]);
	while (str[i] != '\0')
	{
		while ((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			i++;
		}
		while ((str[i] < 'A' || str[i] > 'Z')
				&& (str[i] < 'a' || str[i] > 'z')
				&& (str[i] < '0' || str[i] > '9')
				&& (str[i] != '\0'))
			i++;
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		if (str[i] != '\0')
			i++;
	}
	return (str);
}
