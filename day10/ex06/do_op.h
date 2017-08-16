/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 18:21:52 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/15 18:57:29 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
int		sum(int a, int b);
int		subtract(int a, int b);
int		mul(int a, int b);
int		divi(int a, int b);
int		mod(int a, int b);
int (*g_op[])(int x, int y) = {sum, subtract, mul, divi, mod};

#endif
