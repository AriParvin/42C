# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/13 20:28:07 by aparvin           #+#    #+#              #
#    Updated: 2023/01/04 16:00:41 by aparvin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

CC		= cc
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
			ft_strlcpy.c \
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
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c

BONUS =		ft_lstnew_bonus.c \
			ft_lstadd_front_bonus.c \
			ft_lstsize_bonus.c \
			ft_lstlast_bonus.c \
			ft_lstadd_back_bonus.c \
			ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c \
			ft_lstiter_bonus.c \
			ft_lstmap_bonus.c

all: $(NAME)

OBJECTS = $(SOURCES:.c=.o)

BONUS_OBJECTS = $(BONUS:.c=.o)

$(NAME): $(OBJECTS)
	$(AR) $@ $^ 

bonus: $(BONUS_OBJECTS)
	$(AR) $(NAME) $(BONUS_OBJECTS)

%.o: %.c
	 $(CC) $(CFLAGS) -c $<

clean:
	$(RM) *.o

fclean: clean
		 $(RM) $(NAME)

re: clean all

.PHONY: all clean fclean re bonus
