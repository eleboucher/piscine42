/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 18:50:45 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/10 15:53:28 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (str[i++])
	{
		if (str[i] == to_find[k])
		{
			k++;
			if (to_find[k] == '\0')
				return (str + (i - k));
		}
	}
	return (0);
}