# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/13 20:28:07 by aparvin           #+#    #+#              #
#    Updated: 2022/12/14 16:50:56 by aparvin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
AR		= ar rcs
RM		= rm -f

SOURCES	=	ft_isalpha.c \
		 	ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_strlen.c \
			ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memmove.c \
		#	ft_strlcpy.c \
			ft_strlcat.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strnstr.c \
			ft_atoi.c \
			ft_calloc.c \
			ft_strdup.c \


all: $(NAME)

OBJECTS = $(SOURCES:.c=.o)

$(NAME): $(OBJECTS)
	$(AR) $@ $^ 

%.o: %.c
	 $(CC) $(CFLAGS) -c $<

clean:
	$(RM) *.o

fclean: clean
		 $(RM) $(NAME)

re: clean all

.PHONY: all clean fclean re
