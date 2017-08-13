/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 08:11:55 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/11 10:31:28 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_ultimator.h"

void	ft_destroy(char ***factory)
{
	int count;
	int count2;

	count = 0;
	while (factory[count][count2])
	{
		count2 = 0;
		while (factory[count][count2])
			free(factory[count][count2++]);
		free(factory[count++]);
	}
	free(factory);
}
