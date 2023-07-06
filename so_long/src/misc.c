#include "so_long.h"

void	error_message(char *s)
{
	ft_putstr_fd("ERROR\n", 2);
	ft_putendl_fd(s, 2);
	exit(1);
}

void	check_game_status(t_game *game)
{
	print_moves(game);
	if (game->collected == game->bugs)
	{
		if (mlx_image_to_window(game->mlx, game-img->exit_on,
						game->exit_x * PIXELS, game->exit_y * PIXELS) < 0)
			error_message("IMAGE TO WINDOW FAIL");
		game->grid[game->exit_y][game->exit_x] = '0';
		if (game->frog_x == game->exit_x && game->frog_y == game->exit_y)
		{
			sleep(1);
			mlx_close_window(game->mlx);
			ft_printf("======================\n");
			ft_printf("=MISSION ACCOMPLISHED=\n");
			ft_printf("======================\n");
			ft_printf("THANKS TO YOU THIS PROGRAM IS NOW BUG-FREE\n");
			ft_printf("SO LONG AND THANKS FOR ALL THE BUGS!\n");
		}
	}
}