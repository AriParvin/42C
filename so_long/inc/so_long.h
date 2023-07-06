#ifndef SO_LONG_H
# define SO_LONG_H

# include "../MLX42/include/MLX42/MLX42.h"
# include "../libft/libft.h"
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <memory.h>
# include <time.h>

# define PIXELS 64
# define EMOVE 30

typedef struct s_img
{
    mlx_image_t     *frog;
    mlx_image_t     *floor;
	mlx_image_t		*bug;
	mlx_image_t		*wall;
	mlx_image_t		*exit_on;
	mlx_image_t		*exit_off;
	mlx_image_t		*moves_print;
	mlx_image_t		*moves_nbr;
	mlx_image_t		*bugs_nbr;
}   t_img;

typedef struct s_game
{
    char			**grid;
	size_t			width;
	size_t			height;
	size_t			bugs;
	size_t			collected;
	size_t			steps;
	size_t			frog_x;
	size_t			frog_y;
	size_t			exit_x;
	size_t			exit_y;
	mlx_texture_t	frog_N;
	mlx_texture_t	frog_S;
	mlx_texture_t	frog_W;
	mlx_texture_t	frog_E;
	t_img			*img;
	mlx_t			*mlx;
}	t_game;

/*MAP FUNCTIONS*/
char		*read_map(char *map);
size_t		row_count(char **grid);
t_game		*init_game_struct(char **grid);
t_game		*init_data(char *map);
void		fill_background(t_game *data);
void		render_map(t_game *data);
size_t		count_bugs(t_game *game);
size_t		get_frog_pos(t_game *game, char c);
size_t		get_exit_pos(t_game *game, char c);

/*IMAGE FUNCTIONS*/
t_img		*load_bug_texture(mlx_t *mlx, t_img *img);
t_img		*load_frog_texture(mlx_t *mlx, t_img *img);
t_img		*frog_N(mlx_t *mlx, t_img *img);
t_img		*frog_S(mlx_t *mlx, t_img *img);
t_img		*frog_W(mlx_t *mlx, t_img *img);
t_img		*frog_E(mlx_t *mlx, t_img *img);
t_img		*exit_off(mlx_t *mlx, t_img *img);
t_img		*exit_on(mlx_t *mlx, t_img *img);
t_img		*init_img_struct(mlx_t *mlx);
void		img_select(t_game *data, size_t y, size_t x);
void		load_frog(t_game *game, char dir);

/*MOVE FUNCTIONS*/
void		move_frog(t_game *game, char line, char dir);
void		move_select(t_game *game, char line, char dir);
void		move_hook(mlx_key_data_t keydata, void *data);
t_game		*move_N(t_game *game);
t_game		*move_S(t_game *game);
t_game		*move_W(t_game *game);
t_game		*move_E(t_game *game);

/*MAP VALIDATION*/
void		error_msg(char *msg);
void		check_map_shape(char **grid);// Map Validation

void		error_message(char *msg);
void	  	check_map_shape(char **grid);
void		check_empty(char *map);
void		check_empty_lines(char *map);
void		check_map_content(char *map);
void		check_invalid_content(int i);
void		check_walls(t_game *game);
void		check_row(t_game *game);
void		check_col(t_game *game);
void		check_file_extension(char *file);
void		flood_fill(t_game *game);
int			check_path(t_game *temp, size_t x, size_t y);

void		string_to_screen(t_game *game);
void		print_moves(t_game *game);
void		print_bug(t_game *game);
void		remove_bugs(t_game *game, int y, int x);
void		free_grid(char **grid, size_t height);
void		check_game_status(t_game *game);
#endif