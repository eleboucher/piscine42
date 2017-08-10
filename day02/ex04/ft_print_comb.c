/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 08:26:49 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/03 13:17:11 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = -1;
	while (++a <= 7)
	{
		b = a;
		while (++b < 10)
		{
			c = b;
			while (++c < 10)
			{
				if (c != 2)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				ft_putchar(a + '0');
				ft_putchar(b + '0');
				ft_putchar(c + '0');
			}
		}
	}
}
