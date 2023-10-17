/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:02:45 by aparvin           #+#    #+#             */
/*   Updated: 2023/10/17 14:02:47 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

// counts rows in the map
size_t	count_rows(char **map_grid)
{
	size_t	i;

	i = 0;
	while (map_grid[i])
		i++;
	return (i);
}

// counts collectibles on the map
size_t	count_collectibles(t_game *game)
{
	size_t	collectibles;
	size_t	x;
	size_t	y;

	collectibles = 0;
	y = 0;
	while (y < game->height)
	{
		x = 0;
		while (x < game->width)
		{
			if (game->map_grid[y][x] == 'C')
				collectibles++;
			x++;
		}
		y++;
	}
	return (collectibles);
}

void	wall_check_horizontal(char *map)
{
	size_t	i;
	size_t	width;
	size_t	map_len;

	i = 0;
	width = 0;
	map_len = ft_strlen(map);
	while (map[i] != '\0')
	{
		while (map[i] != '\n' && map[i] != '\0')
		{
			if (map[i] != '1')
				write_error("Wrong wall content!");
			i++;
			width++;
		}
		i = map_len - width;
		while (map[i] != '\0')
		{
			if (map[i] != '1')
				write_error("Wrong wall content!");
			i++;
		}
	}
}

void	wall_check_vertical(char *map)
{
	size_t	i;
	size_t	width;
	size_t	map_len;

	i = 0;
	width = 0;
	map_len = ft_strlen(map);
	while (map[i] != '\0')
	{
		while (map[i] != '\n')
		{
			i++;
			width++;
		}
		i++;
		while (i < map_len - width -1)
		{
			if (map[i] != '1' || map[i + width -1] != '1')
				write_error("Wrong wall content!");
			i = i + width + 1;
		}
		i = i + width;
	}
}
