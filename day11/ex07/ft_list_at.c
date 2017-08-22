/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 13:29:35 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/21 12:03:58 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int		i;

	i = 0;
	while (begin_list)
	{
		if (i == nbr)
			return (begin_list);
		++i;
		begin_list = begin_list->next;
	}
	return (NULL);
}
