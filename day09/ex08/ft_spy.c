/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 08:25:49 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/11 11:13:20 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	char *cpy;

	cpy = str;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 'a' + 'A';
		}
		str++;
	}
	return (cpy);
}

int		ft_strstr(char *str, char *to_find)
{
	int i;
	int k;

	i = 0;
	k = 0;
	ft_strupcase(str);
	while ((*str >= 8 && *str <= 13) || *str == ' ')
		str++;
	while (str[i])
	{
		if (str[i] == to_find[k])
		{
			k++;
			if (to_find[k] == '\0')
				return (1);
		}
		else
			return (0);
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	char	*words[3];
	int		i;
	int		k;

	words[0] = "PRESIDENT";
	words[1] = "ATTACK";
	words[2] = "POWERS";
	i = 1;
	k = 0;
	while (i < argc)
	{
		k = 0;
		while (k < 3)
		{
			if (ft_strstr(argv[i], words[k]) == 1)
			{
				write(1, "Alert!!!\n", 9);
				return (0);
			}
			k++;
		}
		i++;
	}
}
