/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 20:44:17 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/09 14:20:53 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ftstrlen(char *str)
{
	int n;

	n = 0;
	while (*(str++))
		n++;
	return (n);
}

char	*ft_strrev(char *str)
{
	char	temp;
	int		j;
	int		i;

	i = 0;
	j = ftstrlen(str) - 1;
	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	return (str);
}
