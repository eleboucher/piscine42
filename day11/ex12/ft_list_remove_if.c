/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 18:00:23 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/22 13:48:10 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *list;
	t_list *prev;

	list = *begin_list;
	prev = 0;
	if (list == NULL)
		return ;
	while (list)
	{
		if ((*cmp)(list->data, data_ref) == 0)
		{
			if (prev == 0)
				*begin_list = (*begin_list)->next;
			else
			{
				prev->next = list->next;
				free(list);
				list = prev;
			}
		}
		prev = list;
		list = list->next;
	}
}
