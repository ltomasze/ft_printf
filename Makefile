# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ltomasze <ltomasze@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/01 12:08:53 by ltomasze          #+#    #+#              #
#    Updated: 2024/03/22 17:39:56 by ltomasze         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS =	ft_printf.c ft_printf_nbr.c ft_printf_ptr.c \

OBJS = $(SRCS:.c=.o)
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

# Build library
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Compile each .c file into a .o file
%.o: %.c
	cc $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
