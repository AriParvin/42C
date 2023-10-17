/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_functions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:02:38 by aparvin           #+#    #+#             */
/*   Updated: 2023/10/17 14:02:40 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

// checks map for errors
void	map_check(char *map_str)
{
	empty_map(map_str);
	empty_lines(map_str);
	wrong_content(map_str);
	wrong_shape(map_str);
	wrong_wall(map_str);
}

// reads map file and joins lines to a string
char	*read_map(char *map)
{
	char	*line;
	char	*map_str;
	char	*tmp;
	int		fd;

	fd = open(map, O_RDONLY);
	map_str = ft_calloc(1, 1);
	if (!map_str)
		return (NULL);
	while (1)
	{
		line = get_next_line(fd);
		if (line)
		{
			tmp = ft_strjoin(map_str, line);
			free(map_str);
			map_str = tmp;
			free (line);
		}
		else
			break ;
	}
	close (fd);
	return (map_str);
}

// gets x and y coordinates of player and exit
size_t	get_position(t_game *game, char axis, char obj)
{
	size_t	x;
	size_t	y;

	y = 0;
	while (y < game->height)
	{
		x = 0;
		while (x < game->width)
		{
			if (game->map_grid[y][x] == obj)
			{
				if (axis == 'x')
					return (x);
				else
					return (y);
			}
			x++;
		}
		y++;
	}
	return (0);
}

void	check_file_extension(char *file_name_str)
{
	size_t	len;

	len = ft_strlen(file_name_str);
	if (len < 4 || ft_strncmp(file_name_str + len - 4, ".ber", 4))
		write_error("Map can only be a .ber file");
}
