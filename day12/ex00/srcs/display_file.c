/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 16:02:18 by elebouch          #+#    #+#             */
/*   Updated: 2017/08/21 16:56:55 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int		main (int argc, char **argv)
{
	int fd;
	char c;

	if (argc == 1)
	{
		write (2,"File name missing.\n",19);
		return (1);
	}
	else if (argc > 2)
	{
		write(2,"Too many arguments.\n",20);
		return (1);
	}
	if ((fd = open(argv[1], O_RDONLY)) == -1)
		return (1);
	while (read(fd,&c,1))
	{
		if (c != EOF)
			ft_putchar(c);
	}
	return (0);
}
