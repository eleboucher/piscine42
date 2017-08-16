/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 18:50:45 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/15 17:00:02 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*p1;
	char	*p2;

	while (*str)
	{
		if (*str == *to_find)
		{
			p1 = str;
			p2 = to_find;
			while (*p1 && *p2 && *p1 == *p2)
			{
				++p1;
				++p2;
			}
			if (!*p2)
				return (str);
		}
		++str;
	}
	return (0);
}
