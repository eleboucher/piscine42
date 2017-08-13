/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 10:13:53 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/11 10:17:54 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int j;
	int temp;

	i = size - 1;
	while (i > 0)
	{
		j = 0;
		while (j <= i - 1)
		{
			if (tab[j + 1] < tab[j])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i--;
	}
}

int		ft_max(int *tab, int length)
{
	ft_sort_integer_table(tab, length);
	return (tab[length - 1]);
}
