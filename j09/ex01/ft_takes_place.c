/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bferreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 17:54:43 by bferreir          #+#    #+#             */
/*   Updated: 2018/07/12 19:58:52 by bferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_right_moment(int hour)
{
	char moment;

	if ((hour >= 0) && (hour <= 11))
		moment = 'A';
	else
		moment = 'P';
	return (moment);
}

void	ft_takes_place(int hour)
{
	char	moment1;
	char	moment2;
	int		hour2;

	if (hour != 23)
		hour2 = hour + 1;
	else
		hour2 = 0;
	moment1 = ft_right_moment(hour);
	moment2 = ft_right_moment(hour2);
	if (moment1 == 'A' && hour == 0)
		hour = 12;
	if (moment1 == 'P' && hour != 12)
		hour -= 12;
	if (moment2 == 'A' && hour2 == 0)
		hour2 = 12;
	if (moment2 == 'P' && hour2 != 12)
		hour2 -= 12;
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	printf("%d.00 %c.M. AND %d.00 %c.M.\n", hour, moment1, hour2, moment2);
}
