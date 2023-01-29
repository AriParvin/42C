/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 19:05:03 by aparvin           #+#    #+#             */
/*   Updated: 2023/01/24 19:21:23 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char		buffer[BUFFER_SIZE + 1];
	static char		*buff_idx;
	static char		*n_idx;
	char			*line;
	static int		buff_len;
	char			*substr;

	line = NULL;
	if (!buff_idx)
	{
		buff_len = read(fd, buffer, BUFFER_SIZE);
		buffer[buff_len] = '\0';
		if (buff_len <= 0)
			return (NULL);
		buff_idx = buffer;
	}
	while (1)
	{
		if (!buff_idx)
		{
			buff_len = read(fd, buffer, BUFFER_SIZE);
			buffer[buff_len] = '\0';
			if (buff_len <= 0)
			{
				buffer[0] = '\0';
				n_idx = NULL;
				buff_idx = NULL;
				if (buff_len == EOF)
				{
					free(line);
					return (NULL);
				}
				return (line);
			}
			buff_idx = buffer;
		}
		n_idx = ft_n_idx(buff_idx);
		if (!n_idx)
		{
			line = ft_write_new(&line, buff_idx);
			if (!line)
				return (NULL);
			buff_idx = NULL;
		}
		if (n_idx)
		{
			substr = ft_substr(buff_idx, 0, n_idx - buff_idx + 1);
			if (!substr)
				return (NULL);
			line = ft_write_new(&line, substr);
			free(substr);
			if (!line)
				return (NULL);
			if (*(n_idx + 1) == '\0')
				buff_idx = NULL;
			else
				buff_idx = n_idx + 1;
			return (line);
		}
	}
	return (line);
}
