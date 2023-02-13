# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/13 16:02:11 by aparvin           #+#    #+#              #
#    Updated: 2023/02/13 16:02:15 by aparvin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SOURCES = ft_printf.c ft_parse_char.c ft_parse_str.c ft_parse_int.c ft_parse_uint.c ft_parse_ptr.c ft_parse_hex.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putunbr.c ft_puthex.c 

OBJECTS = $(SOURCES:.c=.o)

NAME = libftprintf.a


all: $(NAME)

$(NAME): $(OBJECTS) $(DEPS)
	ar rcs $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS) 

fclean:
	rm -f $(NAME) 

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

re: fclean all

.PHONY: all clean fclean re

