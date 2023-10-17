/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsengeze <bsengeze@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 16:43:09 by bsengeze          #+#    #+#             */
/*   Updated: 2023/07/23 20:36:43 by bsengeze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	empty_map(char *map)
{
	if (!map[0])
		write_error("Empty map!");
}

void	empty_lines(char *map)
{
	size_t	i;

	i = 0;
	while (map[i])
	{
		if (map[0] == '\n' || (map[i] == '\n' && map[i + 1] == '\n'))
			write_error("Empty line in map!");
		i++;
	}
}

void	wrong_content(char *map)
{
	int	player;
	int	collectibles;
	int	exit;
	int	i;

	player = 0;
	exit = 0;
	collectibles = 0;
	i = 0;
	while (map[i])
	{
		if (!(ft_strchr("PECX01\n", map[i])))
			write_error("Invalid characters in map!");
		if (map[i] == 'P')
			player++;
		if (map[i] == 'C')
			collectibles++;
		if (map[i] == 'E')
			exit++;
		i++;
	}
	if (player != 1 || exit != 1 || collectibles < 1)
		write_error("Invalid map!");
}

void	wrong_shape(char *map)
{
	size_t	curr_line_len;
	size_t	i;
	size_t	len;

	curr_line_len = 0;
	i = 0;
	len = 0;
	while (map[i] != '\0')
	{
		while (map[i] != '\n' && map[i] != '\0')
		{
			i++;
			curr_line_len++;
		}
		if (len == 0)
			len = curr_line_len;
		else if (curr_line_len != len)
			write_error("Wrong map shape!");
		curr_line_len = 0;
		if (map[i] == '\n')
			i++;
	}
}

void	wrong_wall(char *map)
{
	wall_check_horizontal(map);
	wall_check_vertical(map);
}
