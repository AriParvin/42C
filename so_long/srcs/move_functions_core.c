/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_functions_core.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:03:15 by aparvin           #+#    #+#             */
/*   Updated: 2023/10/17 14:03:17 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	move_up_core(t_game *game)
{
	game->player_y -= 1;
	game->img->player->instances[0].y -= 1 * PIXELS;
	game->img->player->instances[0].enabled = false;
	game->img->player_right->instances[0].y -= 1 * PIXELS;
	game->img->player_right->instances[0].enabled = false;
	game->img->player_left->instances[0].y -= 1 * PIXELS;
	game->img->player_left->instances[0].enabled = false;
	game->img->player_up->instances[0].y -= 1 * PIXELS;
	game->img->player_up->instances[0].enabled = true;
	game->img->player_down->instances[0].y -= 1 * PIXELS;
	game->img->player_down->instances[0].enabled = false;
	game->steps += 1;
}

void	move_down_core(t_game *game)
{
	game->player_y += 1;
	game->img->player->instances[0].y += 1 * PIXELS;
	game->img->player->instances[0].enabled = false;
	game->img->player_right->instances[0].y += 1 * PIXELS;
	game->img->player_right->instances[0].enabled = false;
	game->img->player_left->instances[0].y += 1 * PIXELS;
	game->img->player_left->instances[0].enabled = false;
	game->img->player_up->instances[0].y += 1 * PIXELS;
	game->img->player_up->instances[0].enabled = false;
	game->img->player_down->instances[0].y += 1 * PIXELS;
	game->img->player_down->instances[0].enabled = true;
	game->steps += 1;
}

void	move_right_core(t_game *game)
{
	game->player_x += 1;
	game->img->player->instances[0].x += 1 * PIXELS;
	game->img->player->instances[0].enabled = false;
	game->img->player_right->instances[0].x += 1 * PIXELS;
	game->img->player_right->instances[0].enabled = true;
	game->img->player_left->instances[0].x += 1 * PIXELS;
	game->img->player_left->instances[0].enabled = false;
	game->img->player_up->instances[0].x += 1 * PIXELS;
	game->img->player_up->instances[0].enabled = false;
	game->img->player_down->instances[0].x += 1 * PIXELS;
	game->img->player_down->instances[0].enabled = false;
	game->steps += 1;
}

void	move_left_core(t_game *game)
{
	game->player_x -= 1;
	game->img->player->instances[0].x -= 1 * PIXELS;
	game->img->player->instances[0].enabled = false;
	game->img->player_right->instances[0].x -= 1 * PIXELS;
	game->img->player_right->instances[0].enabled = false;
	game->img->player_left->instances[0].x -= 1 * PIXELS;
	game->img->player_left->instances[0].enabled = true;
	game->img->player_up->instances[0].x -= 1 * PIXELS;
	game->img->player_up->instances[0].enabled = false;
	game->img->player_down->instances[0].x -= 1 * PIXELS;
	game->img->player_down->instances[0].enabled = false;
	game->steps += 1;
}
