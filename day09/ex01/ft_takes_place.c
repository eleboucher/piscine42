/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 17:46:51 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/12 14:30:09 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb < 10)
	{
		ft_putchar(nb + '0');
	}
}

void	print_hour(int hour)
{
	if (hour < 12 && hour >= 0)
	{
		if (hour == 0)
			ft_putnbr(12);
		else
			ft_putnbr(hour % 12);
		write(1, ".00 AM", 6);
	}
	else
	{
		if (hour == 12)
			ft_putnbr(12);
		else
			ft_putnbr(hour % 12);
		write(1, ".00 PM", 6);
	}
}

void	ft_takes_place(int hour)
{
	write(1, "THE FOLLOWING TAKES PLACE BETWEEN ", 34);
	print_hour(hour);
	write(1, " AND ", 5);
	print_hour(hour + 1);
	write(1, ".\n", 2);
}
