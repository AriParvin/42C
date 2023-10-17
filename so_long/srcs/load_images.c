/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_images.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:02:12 by aparvin           #+#    #+#             */
/*   Updated: 2023/10/17 14:02:14 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_img	*load_grass_texture(mlx_t *mlx, t_img *img)
{
	mlx_texture_t	*grass;

	grass = mlx_load_png("./sprites/floor.png");
	if (!grass)
		write_error("Error while loading png");
	img->grass = mlx_texture_to_image(mlx, grass);
	if (!img->grass)
		write_error("Error during texture to image");
	mlx_delete_texture(grass);
	return (img);
}

t_img	*load_brick_wall_texture(mlx_t *mlx, t_img *img)
{
	mlx_texture_t	*brick_wall;

	brick_wall = mlx_load_png("./sprites/wall.png");
	if (!brick_wall)
		write_error("Error while loading png");
	img->brick_wall = mlx_texture_to_image(mlx, brick_wall);
	if (!img->brick_wall)
		write_error("Error during texture to image");
	mlx_delete_texture (brick_wall);
	return (img);
}

t_img	*load_collectible_texture(mlx_t *mlx, t_img *img)
{
	mlx_texture_t	*collectible;

	collectible = mlx_load_png("./sprites/key.png");
	if (!collectible)
		write_error("Error while loading png");
	img->collectible = mlx_texture_to_image(mlx, collectible);
	if (!img->collectible)
		write_error("Error during texture to image");
	mlx_delete_texture(collectible);
	return (img);
}

t_img	*load_exit_closed(mlx_t *mlx, t_img	*img)
{
	mlx_texture_t	*exit;

	exit = mlx_load_png("./sprites/exit_0.png");
	if (!exit)
		write_error("Error while loading png");
	img->exit_closed = mlx_texture_to_image(mlx, exit);
	if (!img->exit_closed)
		write_error("Error during texture to image");
	mlx_delete_texture(exit);
	return (img);
}

t_img	*load_exit_open(mlx_t *mlx, t_img *img)
{
	mlx_texture_t	*exit;

	exit = mlx_load_png("./sprites/exit_1.png");
	if (!exit)
		write_error("Error while loading png");
	img->exit_open = mlx_texture_to_image(mlx, exit);
	if (!img->exit_open)
		write_error("Error during texture to image");
	mlx_delete_texture(exit);
	return (img);
}
