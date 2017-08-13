/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 10:27:44 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/11 11:36:13 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_active_bits(int value)
{
	unsigned int i;

	i = 0;
	while (value != 0)
	{
		i += value & 1;
		value >>= 1;
	}
	return (i);
}
