/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 12:59:27 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/09 13:36:32 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && (str[i] >= 97 && str[i] <= 122))
			str[i] -= 32;
		while (str[i] == ' ' || str[i] == '-' || str[i] == '+')
		{
			i++;
			if (str[i] >= 97 && str[i] <= 122)
			{
				str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}