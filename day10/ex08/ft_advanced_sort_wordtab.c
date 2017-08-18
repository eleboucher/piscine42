/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 11:07:39 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/17 11:11:07 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char*, char*))
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (tab[i])
		i++;
	i -= 1;
	while (i > 0)
	{
		j = 1;
		while (j <= i - 1)
		{
			if ((*cmp)(tab[j + 1], tab[j]) < 0)
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
