# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/13 20:10:41 by elebouch          #+#    #+#              #
#    Updated: 2017/08/16 08:59:22 by elebouch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra

NAME = do-op 

SRCS = do_op.c     \
	  ft_atoi.c    \
	  ft_putnbr.c  \
	  operator.c 

INCLUDE = do_op.h

all: $(NAME)

$(NAME): 
	$(CC) $(CFLAGS) $(SRCS) -I $(INCLUDE) -o $(NAME) 

clean:
	rm -f $(NAME)

re: fclean all
