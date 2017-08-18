/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 14:02:24 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/16 14:24:11 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *tab;
	int *cpy;
	int i;

	if (min >= max)
		return (NULL);
	if ((tab = (int*)malloc(sizeof(int) * (max - min))) == NULL)
		return (NULL);
	cpy = tab;
	i = min;
	while (i < max)
		*(tab++) = i++;
	return (cpy);
}
