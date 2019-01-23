# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccharrie <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/06 14:56:40 by ccharrie          #+#    #+#              #
#    Updated: 2017/11/07 12:46:36 by ccharrie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Werror -Wextra
HEADER_PATH = ./includes/
SRCS_PATH = ./srcs/
NAME = libft.a
SRCS = $(SRCS_PATH)ft_putchar.c $(SRCS_PATH)ft_putstr.c $(SRCS_PATH)ft_strcmp.c $(SRCS_PATH)ft_strlen.c $(SRCS_PATH)ft_swap.c
OBJECTS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
RM = rm -rf
OPTIONS = -c -I

all: $(NAME)

$(NAME):
				$(CC) $(FLAGS) $(OPTIONS) $(HEADER_PATH) $(SRCS)
				ar r $(NAME) $(OBJECTS)
				ranlib $(NAME)	

clean:
	  	 $(RM) $(OBJECTS)

fclean: clean
	     $(RM) $(NAME)

re: fclean all
