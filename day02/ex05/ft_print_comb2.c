/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 12:27:40 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/06 16:36:13 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c);

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = -1;
	while (++a < 100)
	{
		b = a;
		while (++b < 100)
		{
			if (b != 1)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			ft_putchar(a / 10 + '0');
			ft_putchar(a % 10 + '0');
			ft_putchar(' ');
			ft_putchar(b / 10 + '0');
			ft_putchar(b % 10 + '0');
		}
	}
}
