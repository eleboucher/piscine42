/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 09:10:07 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/17 11:06:59 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *(s2) && *(s1))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort(char **tab)
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
			if (ft_strcmp(tab[j + 1], tab[j]) < 0)
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

void	ft_sort_wordtab(char **tab)
{
	ft_sort(tab);
}
