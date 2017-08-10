/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 12:52:56 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/10 15:10:36 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int result;

	while (*s1 == *(s2++) && *(s1))
		s1++;
	result = *s1 - *s2;
	return (result);
}

void	ft_sort(char **tab, int size)
{
	int		i;
	int		j;
	char	*temp;

	i = size - 1;
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

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*(str++));
}

int		main(int argc, char **argv)
{
	int i;

	ft_sort(argv, argc);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i++]);
		ft_putchar('\n');
	}
	return (0);
}
