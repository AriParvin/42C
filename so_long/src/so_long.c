#include "so_long.h"

int	main(int argc, char **argv)
{
	t_game		*game;
	t_img		*images;

	if (argc != 2)
		error_message("Only one file please!");
	check_file_extension(argv[1]);
	game = initialize_data(argv[1]);
	game->mlx = mlx_init(game->width * PIXELS,
			game->height * PIXELS, "so_long", false);
	if (!game->mlx)
		return (EXIT_FAILURE);
	images = initialize_img_struct(game->mlx);
	game->img = images;
	fill_background(game);
	render_map(game);
	put_enemies(game);
	string_to_screen(game);
	mlx_key_hook(game->mlx, move_hook, game);
	mlx_loop(game->mlx);
	mlx_terminate(game->mlx);
	return (EXIT_SUCCESS);
}