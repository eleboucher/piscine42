/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 11:06:48 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/14 11:20:23 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int length;

	i = -1;
	length = 0;
	while (tab[++i])
		length++;
	i = -1;
	while (tab[++i] < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) < 0)
			return (0);
	}
	return (1);
}
