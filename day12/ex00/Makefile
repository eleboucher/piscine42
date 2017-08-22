# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/21 16:17:56 by elebouch          #+#    #+#              #
#    Updated: 2017/08/21 17:09:49 by elebouch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Werror -Wextra
EXEC = ft_display_file

SRC = srcs/display_file.c \
	  srcs/ft_putchar.c

INCLUDES = includes/

all : $(EXEC)

$(EXEC) : 
	$(CC) $(FLAGS) $(SRC) -I $(INCLUDES) -o $(EXEC)

clean : 
	rm $(EXEC)

re : clean all
