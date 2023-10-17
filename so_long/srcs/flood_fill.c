/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsengeze <bsengeze@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 17:22:36 by bsengeze          #+#    #+#             */
/*   Updated: 2023/07/23 20:35:31 by bsengeze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

// flood fill algorithm to check valid path on the map 
void	flood_fill(t_game *game)
{
	t_game	tmp;
	size_t	i;

	tmp.height = game->height;
	tmp.width = game->width;
	tmp.collectibles = game->collectibles;
	tmp.player_x = game->player_x;
	tmp.player_y = game->player_y;
	tmp.exit_x = 0;
	tmp.map_grid = (char **)malloc(tmp.height * sizeof(char *));
	i = 0;
	if (!tmp.map_grid)
		write_error("Memory allocation problem");
	while (i < tmp.height)
	{
		tmp.map_grid[i] = ft_strdup(game->map_grid[i]);
		i++;
	}
	path_check(&tmp, tmp.player_y, tmp.player_x);
	if (!(tmp.exit_x == 1 && tmp.collectibles == 0))
		write_error("Path error!");
	free_grid(tmp.map_grid, tmp.height);
}

// checks if there is a valid path to the exit
int	path_check(t_game *tmp, size_t y, size_t x)
{
	if (tmp->map_grid[y][x] == '1')
		return (0);
	if (tmp->map_grid[y][x] == 'C')
		tmp->collectibles--;
	if (tmp->map_grid[y][x] == 'E')
	{
		tmp->exit_x = 1;
		return (0);
	}
	tmp->map_grid[y][x] = '1';
	if (path_check(tmp, y + 1, x))
		return (1);
	if (path_check(tmp, y - 1, x))
		return (1);
	if (path_check(tmp, y, x + 1))
		return (1);
	if (path_check(tmp, y, x - 1))
		return (1);
	return (0);
}

// frees the grid of a given height
void	free_grid(char **grid, size_t grid_height)
{
	size_t	i;

	i = 0;
	while (i < grid_height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
