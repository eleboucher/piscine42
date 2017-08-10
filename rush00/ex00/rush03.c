/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 16:38:36 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/06 13:57:53 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	row(int x)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar('A');
		else if (i == x)
			ft_putchar('C');
		else
			ft_putchar('B');
		i++;
	}
}

void	line(int x, int y)
{
	int i;
	int k;

	i = 2;
	while (i++ < y)
	{
		if (x == 1)
			ft_putchar('B');
		else if (x > 1)
		{
			k = 1;
			ft_putchar('B');
			while (k++ <= x)
			{
				if (k == x)
					ft_putchar('B');
				else
					ft_putchar(' ');
			}
		}
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		if (y != 0 || x != 0)
			row(x);
		if (y > 1)
		{
			ft_putchar('\n');
			line(x, y);
			row(x);
		}
	}
}
