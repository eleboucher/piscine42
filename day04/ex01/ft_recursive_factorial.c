/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 19:09:55 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/10 10:51:06 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb > 1 && nb <= 12)
		return (nb * ft_recursive_factorial(nb - 1));
	else if (nb == 0 || nb == 1)
		return (1);
	else
		return (0);
}
