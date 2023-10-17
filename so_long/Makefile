# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/17 14:00:51 by aparvin           #+#    #+#              #
#    Updated: 2023/10/17 14:00:53 by aparvin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
CC = cc 
CFLAGS = -Wall -Wextra -Werror
# MLX42FLAGS = -lglfw -framework Cocoa -framework OpenGL -framework IOKit // for mac
MLX42FLAGS = -ldl -lglfw -pthread -lm 
LIBFT = ./libft/libft.a
LIBMLX42 = ./MLX42/build/libmlx42.a
INCLUDES = -I./include -I./MLX42/include
GREEN   = \033[32;1m
RESET	= \033[0m
MLX42_DIR = ./MLX42
SRC_DIR = srcs/
OBJ_DIR = objs/

SRCS =	main.c utils.c initialization.c map_functions.c map_check.c \
		map_utils.c flood_fill.c load_images.c load_images2.c render.c \
		move_functions.c move_functions2.c enemy_patrol.c screen_string.c \
		load_player_images.c move_functions_core.c

SRC	= $(addprefix $(SRC_DIR), $(SRCS))
OBJ = $(addprefix $(OBJ_DIR), $(notdir $(SRC:.c=.o)))

all:	check_MLX42_dir	$(NAME) 

$(NAME): $(LIBFT) libmlx $(LIBMLX42) $(OBJ)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIBFT) $(LIBMLX42) $(MLX42FLAGS)
	@echo "$(GREEN) Compiled with $(CFLAGS)$(RESET)"

$(LIBFT):
	@$(MAKE) -C ./libft
	@echo "$(GREEN) Libft compiled $(RESET)"

libmlx:
	@cd $(MLX42_DIR) && cmake -B build && cmake --build build -j4
	@echo "$(GREEN) MLX42 built $(RESET)"

check_MLX42_dir:
	@if ! [ -d "$(MLX42_DIR)" ]; then \
	git clone https://github.com/codam-coding-college/MLX42.git $(MLX42_DIR); \
	fi

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) $(INCLUDES) -c -o $@ $^

clean: 
	@$(MAKE) clean -C ./libft
	@rm -rf $(OBJ_DIR)
	@echo "$(GREEN) Cleaned $(RESET)"

fclean: clean
	@$(MAKE) fclean -C ./libft
	@rm -f $(NAME)
	@echo "$(GREEN) Full cleaned $(RESET)"

re:	fclean all

.PHONY: all clean fclean re
