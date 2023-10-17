/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:03:21 by aparvin           #+#    #+#             */
/*   Updated: 2023/10/17 14:03:22 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	fill_background(t_game *game)
{
	size_t		x;
	size_t		y;

	x = 0;
	y = 0;
	while (y < game->height)
	{
		x = 0;
		while (x < game->width)
		{
			if (mlx_image_to_window(game->mlx, game->img->grass,
					x * PIXELS, y * PIXELS) < 0)
				write_error("Failed to put image to window");
			x++;
		}
		y++;
	}
}

void	load_player(t_game *game, size_t y, size_t x)
{
	if (mlx_image_to_window(game->mlx, game->img->player,
			x * PIXELS, y * PIXELS) < 0)
		write_error("Error during img to window!");
	game->img->player->instances[0].enabled = true;
	if (mlx_image_to_window(game->mlx, game->img->player_right,
			x * PIXELS, y * PIXELS) < 0)
		write_error("Error during img to window!");
	game->img->player_right->instances[0].enabled = false;
	if (mlx_image_to_window(game->mlx, game->img->player_left,
			x * PIXELS, y * PIXELS) < 0)
		write_error("Error during img to window!");
	game->img->player_left->instances[0].enabled = false;
	if (mlx_image_to_window(game->mlx, game->img->player_up,
			x * PIXELS, y * PIXELS) < 0)
		write_error("Error during img to window!");
	game->img->player_up->instances[0].enabled = false;
	if (mlx_image_to_window(game->mlx, game->img->player_down,
			x * PIXELS, y * PIXELS) < 0)
		write_error("Error during img to window!");
	game->img->player_down->instances[0].enabled = false;
}

void	select_image(t_game *game, size_t y, size_t x)
{
	size_t	img_size;

	img_size = 32;
	if (game->map_grid[y][x] == '1')
		if (mlx_image_to_window(game->mlx, game->img->brick_wall,
				x * PIXELS, y * PIXELS) < 0)
			write_error("Error during img to window!");
	if (game->map_grid[y][x] == 'C')
		if (mlx_image_to_window(game->mlx, game->img->collectible,
				x * PIXELS + img_size / 2, y * PIXELS + img_size / 2) < 0)
			write_error("Error during img to window!");
	if (game->map_grid[y][x] == 'E')
		if (mlx_image_to_window(game->mlx, game->img->exit_closed,
				x * PIXELS, y * PIXELS) < 0)
			write_error("Error during img to window!");
	if (game->map_grid[y][x] == 'X')
		if (mlx_image_to_window(game->mlx, game->img->enemy,
				x * PIXELS, y * PIXELS) < 0)
			write_error("Error during img to window!");
	if (game->map_grid[y][x] == 'P')
		load_player(game, y, x);
}

void	render_map(t_game *game)
{
	size_t		x;
	size_t		y;

	x = 0;
	y = 0;
	while (y < game->height)
	{
		x = 0;
		while (x < game->width)
		{
			select_image(game, y, x);
			x++;
		}
		y++;
	}
}
