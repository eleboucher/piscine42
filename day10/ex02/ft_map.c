/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 09:49:29 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/14 10:15:10 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int		i;
	char	*array;

	if ((array = (int*)malloc(sizeof(int) * length)) == NULL)
		return (NULL);
	i = -1;
	while (++i < length)
		array[i] = (*f)(tab[i]);
	return (array);
}
