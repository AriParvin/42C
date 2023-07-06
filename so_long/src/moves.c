#include "so_long.h"

void	load_frog(t_game *game, char dir)
{
	if (dir == 'w')
		mlx_draw_texture(game->img->frog, game->frog_N, 0, 0);
	if (dir == 'a')
		mlx_draw_texture(game->img->frog, game->frog_W, 0, 0);
	if (dir == 's')
		mlx_draw_texture(game->img->frog, game->frog_S, 0, 0);
	if (dir == 'd')
		mlx_draw_texture(game->img->frog, game->frog_E, 0, 0);
}

void	move_select(t_game *game, char line, char dir)
{
	if (line == 'y')
	{
		if (dir == 'w')
			move_N(game);
		else
			move_S(game);
	}
	if (line == 'x')
	{
		if (dir == 'd')
			move_E(game);
		else
			move_W(game);
	}
}

void	move_player(t_game *game, char line, char dir)
{
	move_select(game, line, dir);
	load_frog(game, dir);
}

void	move_hook(mlx_key_data_t keydata, void *data)
{
	t_game *game;

	game = (t_game *) data;
	if (mlx_is_key_down(game->mlx, MLX_KEY_ESCAPE))
		mlx_close_window(game->mlx);
	if (keydata.key == MLX_KEY_W && keydata.action == MLX_PRESS)
		move_player(game, 'y', 'w');
	if (keydata.key == MLX_KEY_A && keydata.action == MLX_PRESS)
		move_player(game, 'x', 'a');
	if (keydata.key == MLX_KEY_S && keydata.action == MLX_PRESS)
		move_player(game, 'y', 's');
	if (keydata.key == MLX_KEY_D && keydata.action == MLX_PRESS)
		move_player(game, 'x', 'd');
}