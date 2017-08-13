/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 21:45:05 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/10 21:51:48 by elebouch         ###   ########.fr       */
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

int		ft_antidote(int i, int j, int k)
{
	int tab[3];

	tab[0] = i;
	tab[1] = j;
	tab[2] = k;
	ft_sort_integer_table(tab, 3);
	return (tab[1]);
}
