/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 11:19:01 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/21 12:05:37 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

int		ft_list_size(t_list *begin_list)
{
	int			i;
	t_list		*list;

	list = begin_list;
	i = 0;
	if (begin_list == NULL)
	{
		return (0);
	}
	while (list->next != NULL)
	{
		i++;
		list = list->next;
	}
	return (i);
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*node;
	t_list	*next;
	void	*tmp;
	int		size;

	node = *begin_list;
	size = ft_list_size(*begin_list);
	while (size--)
	{
		node = *begin_list;
		next = node->next;
		while (node && next)
		{
			if ((*cmp)(node->data, next->data) > 0)
			{
				tmp = node->data;
				node->data = next->data;
				next->data = tmp;
			}
			node = next;
			next = next->next;
		}
	}
}
