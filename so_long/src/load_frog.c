#include "so_long.h"

t_img	*load_frog_texture(mlx_t *mlx, t_img *img)
{
	mlx_texture_t	*frog;

	frog = mlx_load_png("./sprites/frog_S.png");
	if (!frog)
		error_message("PNG LOAD FAILURE");
	img->frog = mlx_texture_to_image(mlx, frog);
	if (!img->frog)
		error_message("PNG LOAD FAILURE");
	mlx_delete_texture(frog);
	return (img);
}