# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/06 09:21:07 by aparvin           #+#    #+#              #
#    Updated: 2023/03/07 14:53:49 by aparvin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_PUSH_SWAP= push_swap

SRC_PATH= srcs
HDR_PATH= includes
OBJ_PATH= obj
LIB_PATH= libft
TOOLS_PATH=$(OBJ_PATH)/tools
SHARED_PATH=$(OBJ_PATH)/shared

SRC_SHARED= shared/push_a.c \
			shared/check_digit.c \
			shared/shared.c \
			shared/algo_1.c \
			shared/algo_2.c \
			shared/free.c \
			shared/medium.c \
			shared/pivot.c \
			shared/algo_2norm.c \
			shared/print.c \
			shared/push_b.c \
			shared/rotate_a.c \
			shared/rotate_b.c \
			shared/rotate.c \
			shared/swap_a.c \
			shared/swap_b.c \
			shared/swap_s.c \
			shared/index.c \
			shared/parameter.c

SRC_TOOLS=	tools/ft_abs.c \
			tools/min.c \
			tools/max.c \
			tools/check.c \
			tools/size_arg.c \
			tools/list.c \
			tools/check_sort.c \
			tools/strdup_2d.c \
			tools/ft_strcmp.c \
			tools/ft_atol.c

SRC_NAME= $(SRC_NAME:.c=.o)
OBJ_NAME_CHECKER= $(addprefix $(OBJ_PATH)/,$(OBJ_NAME_CHECKER))

LIB= libft.a
LLIB_FLAG= -L$(LIB_PATH) libft/libft.a
H_FLAG= -I $(HDR_PATH)

COMP= cc

# FLAGS = -Wall -Wextra -Werror

all: lib $(NAME_CHECKER) $(NAME_PUSH_SWAP)

$(NAME_PUSH_SWAP) : $(LIB_PATH)/$(LIB) $(OBJ)
		@rm -rf push_swap
		@$(COMP) -g $(H_FLAG) $(OBJ) $(LLIB_FLAG) -o $@
		@echo "Compilation of $(NAME_PUSH_SWAP): \033[1;32mOK\033[m"
