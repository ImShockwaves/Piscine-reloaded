# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccharrie <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/06 16:10:59 by ccharrie          #+#    #+#              #
#    Updated: 2017/11/07 12:20:12 by ccharrie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
CC = gcc
SRCS = ft_display_file.c
FLAGS = -Wall -Werror -Wextra
OPTIONS = ft_display_file.o
RM = rm -rf

all:		$(NAME)

$(NAME):	
			$(CC) $(FLAGS) $(SRCS) -o $(NAME)

$(OPTIONS):	
			$(CC) $(FLAGS) -c $(SRCS)

clean:
			$(RM) $(OPTIONS)

fclean:		clean
			$(RM) $(NAME)

re: 		fclean all
