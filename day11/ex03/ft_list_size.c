/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 16:32:50 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/17 16:38:48 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

int	ft_list_size(t_list *begin_list)
{
	int			i;
	t_list		*list;

	list = begin_list;
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
