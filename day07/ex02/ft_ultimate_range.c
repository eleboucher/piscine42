/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 14:44:35 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/13 09:53:22 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_ultimate_range(int **range, int min, int max)
{
	int i;

	if (min >= max)
		return (NULL);
	if ((range = (int*)malloc(sizeof(int) * (max - min))) == null)
		return (NULL);
	i = min;
	while (i < max)
	{
		*range = i++;
		range++;
	}
	return (max-min);
}
