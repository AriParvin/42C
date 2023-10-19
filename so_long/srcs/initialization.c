/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialization.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:01:29 by aparvin           #+#    #+#             */
/*   Updated: 2023/10/17 14:01:59 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

// takes map as argument and initializes game
t_game	*init_game(char *map)
{
	char	*map_str;
	char	**map_arr;
	t_game	*game;

	map_str = read_map(map);
	map_check(map_str);
	map_arr = ft_split(map_str, '\n');
	game = init_game_struct(map_arr);
	flood_fill(game);
	free(map_str);
	return (game);
}

// fills game struct with map information
t_game	*init_game_struct(char **map_arr)
{
	t_game	*game;

	game = (t_game *)ft_calloc(1, sizeof(t_game));
	if (!game)
		write_error("Memory allocation error!");
	game->width = ft_strlen(map_arr[0]);
	game->height = count_rows(map_arr);
	game->map_grid = map_arr;
	game->steps = 0;
	game->collectibles = count_collectibles(game);
	game->player_x = get_position(game, 'x', 'P');
	game->player_y = get_position(game, 'y', 'P');
	game->exit_x = get_position(game, 'x', 'E');
	game->exit_y = get_position(game, 'y', 'E');
	return (game);
}

// initializes game images
t_img	*init_img_struct(mlx_t *mlx)
{
	t_img	*images;

	images = (t_img *)ft_calloc(1, sizeof(t_img));
	if (!images)
		return (NULL);
	images = load_grass_texture(mlx, images);
	images = load_brick_wall_texture(mlx, images);
	images = load_collectible_texture(mlx, images);
	images = load_player_texture(mlx, images);
	images = load_player_right_texture(mlx, images);
	images = load_player_left_texture(mlx, images);
	images = load_player_down_texture(mlx, images);
	images = load_player_up_texture(mlx, images);
	images = load_exit_closed(mlx, images);
	images = load_exit_open(mlx, images);
	images = load_enemy_texture(mlx, images);
	return (images);
}
