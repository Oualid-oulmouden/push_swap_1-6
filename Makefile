# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/19 16:18:31 by ooulmoud          #+#    #+#              #
#    Updated: 2024/05/26 19:50:19 by ooulmoud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

files_c = push_to_a.c \
	push_to_b.c \
	swap_value_in_a.c \
	swap_value_in_b.c \
	swap_value_in_ab.c \
	retate_a.c \
	retate_b.c \
	retate_ab.c \
	retate_revers_a.c \
	retate_revers_b.c \
	retate_revers_ab.c \
	main.c \
	utils.c \
	small.c \
	stack_info.c \

files_o = $(files_c:.c=.o)

all: $(NAME)

$(NAME): $(files_o)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@
	ar -r $(NAME) $@

clean:
	rm -f $(files_o)

fclean:
	rm -f $(files_o) $(NAME)

re: fclean all


