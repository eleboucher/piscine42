/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 08:29:27 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/11 10:31:48 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 0)
		return (0);
	if (base % 2 == 0)
		return (1 + ft_collatz_conjecture(base / 2));
	return (1 + ft_collatz_conjecture(base * 3 + 1));
}
