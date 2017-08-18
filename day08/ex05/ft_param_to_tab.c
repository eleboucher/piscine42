/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 18:25:32 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/17 10:44:59 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdlib.h>

int					ft_strlength(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	char *dest;
	char *cpy;

	if ((dest = (char*)malloc(sizeof(char) * (ft_strlength(src) + 1))) == NULL)
		return (NULL);
	cpy = dest;
	while (*src)
		*(dest++) = *(src++);
	*dest = '\0';
	return (cpy);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par *params;
	int			i;

	if ((params = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1))) == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		params[i].size_param = ft_strlength(av[i]);
		params[i].str = av[i];
		params[i].copy = ft_strdup(av[i]);
		params[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	params[i].str = 0;
	return (params);
}
