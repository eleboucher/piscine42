/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 11:31:06 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/16 08:58:34 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"
#include <unistd.h>

int	ft_change_operator(char c)
{
	if (c == '+')
		return (0);
	else if (c == '-')
		return (1);
	else if (c == '*')
		return (2);
	else if (c == '/')
		return (3);
	else if (c == '%')
		return (4);
	return (5);
}

int	main(int argc, char **argv)
{
	int j;
	int i;
	int op;

	if (argc > 4 || argc < 4)
		return (1);
	op = ft_change_operator(argv[2][0]);
	i = ft_atoi(argv[1]);
	j = ft_atoi(argv[3]);
	if (op == 3 && j == 0)
	{
		write(1, "Stop : division by zero\n", 24);
		return (1);
	}
	else if (op == 4 && j == 0)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (1);
	}
	if (op != 5)
		ft_putnbr((*g_op[op])(i, j));
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}
