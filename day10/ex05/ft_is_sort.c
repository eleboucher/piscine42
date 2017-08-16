/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 11:06:48 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/15 12:06:43 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int count;
	int	increase;
	int decrease;

	count = 0;
	increase = 1;
	decrease = 1;
	while (count < length - 1)
	{
		if ((*f)(tab[count], tab[count + 1]) < 0)
			increase = 0;
		if ((*f)(tab[count], tab[count + 1]) > 0)
			decrease = 0;
		count++;
	}
	return (increase || decrease);
}
