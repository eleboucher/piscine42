/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 09:02:49 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/13 13:54:43 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int		countword(char *str)
{
	int		i;
	int		k;

	i = 0;
	k = 0;
	while(str[k])
	{
		if (k == 0 && str[k] > 32)
			++i;
		while ((str[k] >= 8 && str[k] <= 13) || str[k] == ' ')
		{
			++k;
			if (str[k] > 32)
				++i;
		}
		++k;
	}
	return(i);
}


char **ft_split_whitespaces(char *str)
{
	char **array;

	if ((array = (char**)malloc(countword(str) * sizeof(char*)))== NULL)
		return NULL;

	return array;
}

void main()
{
	char *tab = "H";
	char **array = ft_split_whitespaces(tab);
	printf("%s",array[0]);
}
