# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/13 20:10:41 by elebouch          #+#    #+#              #
#    Updated: 2017/08/20 16:15:20 by elebouch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra
ARFLAGS = rc

NAME = libft

SRCS = ft_putchar.c \
	   ft_putstr.c  \
	   ft_strcmp.c  \
	   ft_strlen.c  \
	   ft_swap.c

INCLUDE = includes/

DIROBJ = srcs
SRC = $(addprefix $(DIROBJ)/, $(SRCS))
OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): 
	$(CC) $(CFLAGS) $(SRC) -I $(INCLUDE) -c 
	ar $(ARFLAGS) $(NAME).a $(OBJ) 
	ranlib $(NAME).a

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME).a

re: fclean all
