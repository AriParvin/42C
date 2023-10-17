/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enemy_patrol.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:01:08 by aparvin           #+#    #+#             */
/*   Updated: 2023/10/17 14:01:14 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

// function for enemy patrol loop
void	enemy_hook(void *tmp)
{
	const t_game	*game;
	size_t			count;
	static int		i;

	game = tmp;
	count = 0;
	kill_check(game);
	if (i++ < 60)
		return ;
	while (count < game->img->enemy->count)
	{
		move_enemies (game, count);
		count++;
	}
	i = 0;
}

// check if the player is touched by the patrol
void	kill_check(const t_game *game)
{
	size_t	count;

	count = 0;
	while (count < game->img->enemy->count)
	{
		if (game->player_x * PIXELS
			== (size_t)game->img->enemy->instances[count].x
			&& game->player_y * PIXELS
			== (size_t)game->img->enemy->instances[count].y)
		{
			mlx_close_window(game->mlx);
			ft_putendl_fd("Oooops, you lost!", 1);
			ft_putendl_fd("Try again!", 1);
		}
		count++;
	}
}

// function to move enemies in random directions
void	move_enemies(const t_game *game, int count)
{
	t_tmp			tmp;

	tmp.x = &game->img->enemy->instances[count].x;
	tmp.y = &game->img->enemy->instances[count].y;
	tmp.ran_x = (rand() % 3 - 1) * 64;
	tmp.ran_y = (rand() % 3 - 1) * 64;
	tmp.index_x = *tmp.x + tmp.ran_x;
	tmp.index_y = *tmp.y + tmp.ran_y;
	if (tmp.index_x != 0)
		tmp.index_x /= PIXELS;
	if (tmp.index_y != 0)
		tmp.index_y /= PIXELS;
	if (game->map_grid[tmp.index_y][tmp.index_x] != '1'
		&& game->map_grid[tmp.index_y][tmp.index_x] != 'E')
	{
		*tmp.x += tmp.ran_x;
		*tmp.y += tmp.ran_y;
	}
}
