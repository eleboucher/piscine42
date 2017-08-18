/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 14:44:35 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/17 09:01:49 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int *tab;
	int i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if ((tab = (int*)malloc(sizeof(int) * (max - min))) == NULL)
		return (0);
	i = min;
	*range = tab;
	while (i < max)
		*(tab++) = i++;
	return (max - min);
}
