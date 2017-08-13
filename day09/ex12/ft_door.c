/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 09:35:33 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/11 09:57:00 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_door.h"

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	close_door(t_door *door)
{
	ft_putstr("Door closing...\n");
	door->state = CLOSE;
}

void	open_door(t_door *door)
{
	ft_putstr("Door opening...\n");
	door->state = OPEN;
}

int		is_door_open(t_door *door)
{
	ft_putstr("Door is open ?\n");
	return (door->state == OPEN);
}

int		is_door_close(t_door *door)
{
	ft_putstr("Door is close ?\n");
	return (door->state == CLOSE);
}
