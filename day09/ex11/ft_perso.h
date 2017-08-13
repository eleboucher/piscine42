/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 09:24:21 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/11 09:33:46 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H
# include <string.h>
# define SAVE_THE_WORLD 1

typedef	struct	s_perso
{
	char		*name;
	double		life;
	int			age;
	int			profession;
}				t_perso;
#endif
