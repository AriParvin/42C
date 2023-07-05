#include "so_long.h"

static void		load_frog_textures(t_game *game)
{
	game->frog_N = mlx_load_png("./sprites/frog_N.png");
	if (!game->frog_N)
		error_message("ERROR LOADING SPRITE");
	game->frog_S = mlx_load_png("./sprites/frog_S.png");
	if (!game->frog_S)
		error_message("ERROR LOADING SPRITE");
	game->frog_W = mlx_load_png("./sprites/frog_W.png");
	if (!game->frog_W)
		error_message("ERROR LOADING SPRITE");
	game->frog_E = mlx_load_png("./sprites/frog_E.png");
	if (!game->frog_E)
		error_message("ERROR LOADING SPRITE");
}

t_game			*init_game_struct(char **grid)
{
	t_game	*game;

	game = (t_game *)ft_calloc(1, sizeof(t_game));
	if (!game)
		error_message("ERROR MALLOC FAIL");
	game->width = ft_strlen(grid[0]);
	game->height = row_count(grid);
	game->grid = grid;
	game->steps = 0;
	game->bugs = count_bugs(game);
	game->frog_x = get_frog_pos(game, 'x');
	game->frog_y = get_frog_pos(game, 'y');
	game->exit_x = get_exit_pos(game, 'x');
	game->exit_y = get_exit_pos(game, 'y');
	load_frog_textures(game);
	return(game);
}

t_game			*init_data(char *map)
{
	char		*map_as_str;
	char		**map_as_array;
	t_game		*data;

	map_as_str = read_map(map);
	check_empty(map_as_str);
	check_empty_lines(map_as_str);
	check_map_content(map_as_str);
	map_as_array = ft_split(map_as_str, '\n');
	check_map_shape(map_as_array);
	data = init_game_struct(map_as_array);
	check_walls(data);
	flood_fill(data);
	free(map_as_str);
	return(data);
}

t_img		*init_img_struct(mlx_t *mlx)
{
	t_img	*assets;

	assets = (t_img *)ft_calloc(1, sizeof(t_img));
	if (!assets)
		return(NULL);
	assets = load_floor_texture(mlx, assets);
	assets = load_wall_texture(mlx, assets);
	assets = load_bug_texture(mlx, assets);
	assets = load_frog_texture(mlx, assets);
	assets = load_exit_on(mlx, assets);
	assets = load_exit_off(mlx, assets);
	return (assets);
}