/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:02:25 by aparvin           #+#    #+#             */
/*   Updated: 2023/10/17 14:02:28 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	t_game	*game;
	t_img	*images;

	if (ac != 2)
		write_error("Argument count should be 2!");
	check_file_extension(av[1]);
	game = init_game(av[1]);
	game->mlx = mlx_init(game->width * PIXELS,
			game->height * PIXELS, "so_long", true);
	if (!game->mlx)
		return (EXIT_FAILURE);
	images = init_img_struct(game->mlx);
	game->img = images;
	mlx_set_setting(MLX_STRETCH_IMAGE, true);
	fill_background(game);
	render_map(game);
	screen_str(game);
	mlx_key_hook(game->mlx, move_hook, game);
	mlx_loop_hook(game->mlx, enemy_hook, game);
	mlx_loop(game->mlx);
	mlx_terminate(game->mlx);
	free_game(game);
	return (0);
}
