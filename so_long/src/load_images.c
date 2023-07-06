#include "so_long.h"

t_img	*load_floor_texture(mlx_t *mlx, t_img *img)
{
	mlx_texture_t	*floor;

	floor = mlx_load_png("./sprites/floor.png");
	if (!floor)
		error_message("PNG LOAD FAILURE");
	img->floor = mlx_texture_to_image(mlx, floor);
	if (!img->floor)
		error_message("TEXTURE TO IMAGE FAILURE");
	mlx_delete_texture(floor);
	return(img);
}

t_img	*load_wall_texture(mlx_t *mlx, t_img *img)
{
	mlx_texture_t	*wall;

	wall = mlx_load_png("./sprites/wall.png");
	if (!wall)
		error_message("PNG LOAD FAILURE");
	img->wall = mlx_texture_to_image(mlx, wall);
	if (!img->bush)
		error_message("TEXTURE TO IMAGE FAILURE");
	mlx_delete_texture(wall);
	return (img);
}

t_img	*load_bug_texture(mlx_t *mlx, t_img *img)
{
	mlx_texture_t	*bug;

	bug = mlx_load_png("./sprites/bug.png");
	if (!bug)
		error_message("PNG LOAD FAILURE");
	img->bug = mlx_texture_to_image(mlx, bug);
	if (!img->bug)
		error_message("TEXTURE TO IMAGE FAILURE");
	mlx_delete_texture(bug);
	return (img);
}	

t_img	*load_exit_on(mlx_t *mlx, t_img *img)
{
	mlx_texture_t	*exit;

	exit = mlx_load_png("./sprites/exit_on.png");
	if (!exit)
		error_message("PNG LOAD FAILURE");
	img->exit = mlx_texture_to_image(mlx, exit);
	if (!img->exit)
		error_message("TEXTURE TO IMAGE FAILURE");
	mlx_delete_texture(exit);
	return (img);
}	

t_img	*load_exit_off(mlx_t *mlx, t_img *img)
{
	mlx_texture_t	*exit;

	exit = mlx_load_png("./sprites/exit_off.png");
	if (!exit)
		error_message("PNG LOAD FAILURE");
	img->exit = mlx_texture_to_image(mlx, exit);
	if (!img->exit)
		error_message("TEXTURE TO IMAGE FAILURE");
	mlx_delete_texture(exit);
	return (img);
}	