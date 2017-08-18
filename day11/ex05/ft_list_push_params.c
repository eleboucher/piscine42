/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 16:49:56 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/17 16:58:28 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list *list;
	t_list *begin_list;
	int 	i;

	i = 0;
	list = ft_create_elem(av[i]);
	begin_list = list;
	while (++i < ac)
	{
		list->next = ft_create_elem(av[i]);
		list = list->next;
	}
	return(begin_list);
}
