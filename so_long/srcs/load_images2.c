/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_images2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:02:05 by aparvin           #+#    #+#             */
/*   Updated: 2023/10/17 14:02:08 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_img	*load_enemy_texture(mlx_t *mlx, t_img *img)
{
	mlx_texture_t	*enemy;

	enemy = mlx_load_png("./sprites/enemy.png");
	if (!enemy)
		write_error("Error while loading png");
	img->enemy = mlx_texture_to_image(mlx, enemy);
	if (!img->enemy)
		write_error("Error during texture to image");
	mlx_delete_texture(enemy);
	return (img);
}
/*
t_img	*load_player_dead(mlx_t *mlx, t_img *img)
{
	mlx_texture_t	*dead;

	dead = mlx_load_png("./sprites/dead.png");
	if (!dead)
		write_error("Error while loading png");
	img->player_dead = mlx_texture_to_image(mlx, dead);
	if (!img->player_dead)
		write_error("Error during texture to image");
	mlx_delete_texture(dead);
	return (img);
}
*/
