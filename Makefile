# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zchbani <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/09 15:34:24 by zchbani           #+#    #+#              #
#    Updated: 2022/01/18 16:57:30 by zchbani          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRC_FILE =	main_directory/push_swap.c \
			instructions/instructions1.c \
			instructions/instructions2.c \
			instructions/instructions3.c \
			instructions/instructions4.c \
			sort/radix_sort.c \
			sort/sorting_element.c \
			utiles/utiles1.c \
			utiles/utiles2.c \
			utiles/utiles3.c \
			sort/simple_sort.c \

LIB = ./libft/libft.a

LIB_PATH = ./libft

OBJ_FILE = $(SRC_FILE:.c=.o)

all : $(NAME)

%.o: %.c push_swap.h
	@make -C $(LIB_PATH)
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ_FILE)
	@$(CC) $(CFLAGS) $(OBJ_FILE) $(LIB) -o $(NAME)

clean :
	@make clean -C $(LIB_PATH)
	@rm -rf $(OBJ_FILE)

fclean : clean
	@make fclean -C $(LIB_PATH)
	@rm -rf $(NAME)

re : fclean all

.PHONY : clean re fclean
