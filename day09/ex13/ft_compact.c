/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 10:00:27 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/11 10:10:43 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_compact(char **tab, int length)
{
	int i;

	i = 0;
	while (i < length)
	{
		if (!tab[i])
		{
			while (i < length - 1)
			{
				tab[i] = tab[i + 1];
				i++;
			}
			length--;
			i = 0;
		}
		i++;
	}
	return (length);
}
