/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 16:02:18 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/22 17:24:18 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int		main(int argc, char **argv)
{
	int		fd;
	int		i;
	char	c;

	i = 0;
	while (i++ < argc)
	{
		if ((fd = open(argv[i], O_RDONLY)) == -1)
			return (1);
		while (read(fd, &c, 1))
		{
			if (c != EOF)
				ft_putchar(c);
		}
	}
	return (0);
}
