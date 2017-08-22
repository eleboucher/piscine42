/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 13:15:41 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/21 12:03:40 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list *cur;
	t_list *next;

	if (begin_list == NULL)
		return ;
	cur = *begin_list;
	while (cur)
	{
		next = cur->next;
		free(cur);
		cur = next;
	}
	*begin_list = 0;
}
