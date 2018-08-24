/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bferreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 00:38:39 by bferreir          #+#    #+#             */
/*   Updated: 2018/07/15 22:30:35 by bferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		match(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*s1 == '\0')
			return (match(s1, s2 + 1));
		return (match(s1 + 1, s2) || match(s1, s2 + 1));
	}
	if (*s1 != '\0' && *s1 == *s2)
		return (match(s1 + 1, s2 + 1));
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	return (0);
}