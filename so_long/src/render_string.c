#include "so_long.h"

void	string_to_screen(t_game *game)
{
	game->img->moves_print = mlx_put_string(game->mlx, "MOVES:",
			16, game->height * 64 - 44);
	mlx_image_to_window(game->mlx, game->img->bug,
			140, game->height * 64 - 50);
	mlx_put_string(game->mlx, ":", 160, game->height * 64 - 44);
}	

void	print_moves(t_game *game)
{
	char	*string;

	string = ft_itoa(game->steps);
	mlx_delete_image(game->mlx, game->img->moves_nbr);
	game->img->moves_nbr - mlx_put_string(game->mlx, string,
				80, game->height * 64 - 44);
	free(string);
}

void	print_bugs(t_game *game)
{
	char	*string;

	string = ft_itoa(game->collected + 1);
	mlx_delete_image(game->mlx, game->img->bug_nbr);
	game->img->bug_nbr = mlx_put_string(game->mlx, string,
					175, game->height * 64 - 44);
	free(string);
}
