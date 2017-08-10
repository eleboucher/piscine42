/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 21:08:27 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/09 11:59:12 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;
	int result;

	i = 1;
	result = 0;
	while (result < nb)
	{
		result += i;
		i = i + 2;
	}
	if (result > nb)
		return (0);
	if (nb == 0)
		return (0);
	return ((i - 2) / 2 + 1);
}
