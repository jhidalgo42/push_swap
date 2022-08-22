# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhidalgo <jhidalgo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/17 19:01:38 by jhidalgo          #+#    #+#              #
#    Updated: 2022/08/22 21:14:04 by jhidalgo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = gcc
CFLAGS = -Wall -Werror -Wextra
#FSANITIZE = -fsanitize=address -g3
INCLUDE = -I./includes/
RM = rm -rf

SRC_DIR = ./src/
SRC_FILES = main.c movements.c
SRCS = $(addprefix $(SRC_DIR), $(SRC_FILES))

libft.a:
		make -C libft
#		cp libft/libft.a .
#		mv libft/libft.a $(NAME)

OBJS = $(SRCS:.c=.o)

%.o:%.c
	$(CC) $(CFLAGS) $(FSANITIZE) $(INCLUDE) -c $< -o $@

$(NAME): 	$(OBJS) 
			@$(MAKE) -C ./libft
			@$(CC) $(CFLAGS) libft/libft.a $(OBJS) -o $(NAME)
#			ar rcs  $(NAME) $(OBJS)
#			ranlib $(NAME)

all: $(NAME)

clean:
	make -C libft clean
	$(RM) $(OBJS)

fclean:		clean
	rm -f libft.a
	$(RM) $(NAME)

re: fclean all

.PHONY:		all clean fclean  re