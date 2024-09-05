# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/14 10:47:05 by jlarue            #+#    #+#              #
#    Updated: 2023/01/03 14:10:18 by jlarue           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc -Wall -Werror -Wextra -g3

RM = rm -f

SRC = main.c \
	  ft_atol.c \
	  fill_tabtab.c \
	  check_list.c \
	  check_doubloons.c \
	  swap_a.c \
	  swap_b.c \
	  swap_ss.c \
	  push_a.c \
	  push_b.c \
	  rotate_a.c \
	  rotate_b.c \
	  rotate_rr.c \
	  reverse_rotate_a.c \
	  reverse_rotate_b.c \
	  reverse_rotate_rr.c  \
	  utils.c \
	  fill_rank.c \
	  algo.c \
	  put_in_column2.c \
	  sort_column_complex.c \
	  move_utils.c

OBJ = $(SRC:.c=.o)

BONUS_OBJ = $(BONUS_SRC:.c=.o)

all: $(NAME)

.c.o:
	$(CC) -c $< -o $(<:.c=.o)

$(NAME): $(OBJ)
	make -C printf
	cp printf/libftprintf.a .
	$(CC) $(OBJ) libftprintf.a -o $(NAME)
clean:
	$(RM) $(OBJ)
	make clean -C printf

fclean:    clean
	$(RM) $(NAME)
	rm -f libftprintf.a

re: fclean all

.PHONY: all bonus clean fclean re
