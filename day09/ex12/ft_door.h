/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 09:35:43 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/11 09:56:27 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H
# define CLOSE 0
# define OPEN 1

typedef	struct		s_door
{
	int				state;
}					t_door;

int					is_door_close(t_door *door);
void				close_door(t_door *door);
int					is_door_open(t_door *door);
void				ft_putstr(char *str);
void				open_door(t_door *door);
#endif
