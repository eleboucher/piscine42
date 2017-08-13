/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 11:47:16 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/11 11:57:46 by elebouch         ###   ########.fr       */
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

int		ft_unmatch(int *tab, int length)
{
	int i;

	i = 0;
	ft_sort_integer_table(tab, length);
	while (i < length - 1)
	{
		if (tab[i] != tab[i + 1])
			return (tab[i]);
		i += 2;
	}
	return (tab[length - 1]);
}
