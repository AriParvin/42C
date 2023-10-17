/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_player_images.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsengeze <bsengeze@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 22:44:50 by bsengeze          #+#    #+#             */
/*   Updated: 2023/07/23 20:35:45 by bsengeze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_img	*load_player_texture(mlx_t *mlx, t_img *img)
{
	mlx_texture_t	*player;

	player = mlx_load_png("./sprites/frog_s.png");
	if (!player)
		write_error("Error while loading png");
	img->player = mlx_texture_to_image(mlx, player);
	if (!img->player)
		write_error("Error during texture to image");
	mlx_delete_texture(player);
	return (img);
}

t_img	*load_player_right_texture(mlx_t *mlx, t_img *img)
{
	mlx_texture_t	*player_right;

	player_right = mlx_load_png("./sprites/frog_e.png");
	if (!player_right)
		write_error("Error while loading png");
	img->player_right = mlx_texture_to_image(mlx, player_right);
	if (!img->player_right)
		write_error("Error during texture to image");
	mlx_delete_texture(player_right);
	return (img);
}

t_img	*load_player_left_texture(mlx_t *mlx, t_img *img)
{
	mlx_texture_t	*player_left;

	player_left = mlx_load_png("./sprites/frog_w.png");
	if (!player_left)
		write_error("Error while loading png");
	img->player_left = mlx_texture_to_image(mlx, player_left);
	if (!img->player_left)
		write_error("Error during texture to image");
	mlx_delete_texture(player_left);
	return (img);
}

t_img	*load_player_up_texture(mlx_t *mlx, t_img *img)
{
	mlx_texture_t	*player_up;

	player_up = mlx_load_png("./sprites/frog_n.png");
	if (!player_up)
		write_error("Error while loading png");
	img->player_up = mlx_texture_to_image(mlx, player_up);
	if (!img->player_up)
		write_error("Error during texture to image");
	mlx_delete_texture(player_up);
	return (img);
}

t_img	*load_player_down_texture(mlx_t *mlx, t_img *img)
{
	mlx_texture_t	*player_down;

	player_down = mlx_load_png("./sprites/frog_s.png");
	if (!player_down)
		write_error("Error while loading png");
	img->player_down = mlx_texture_to_image(mlx, player_down);
	if (!img->player_down)
		write_error("Error during texture to image");
	mlx_delete_texture(player_down);
	return (img);
}
