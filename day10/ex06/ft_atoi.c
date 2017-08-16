/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 21:05:45 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/07 19:15:22 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int result;

	result = 0;
	while ((*str >= 8 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '-')
	{
		str++;
		while (*str >= '0' && *str <= '9')
			result = result * 10 + (*(str++) - '0');
		return (-result);
	}
	else
	{
		if (*str == '+')
			str++;
		while (*str >= '0' && *str <= '9')
			result = result * 10 + (*(str++) - '0');
		return (result);
	}
	return (0);
}
