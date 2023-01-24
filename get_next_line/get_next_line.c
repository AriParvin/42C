/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 14:00:38 by aparvin           #+#    #+#             */
/*   Updated: 2023/01/23 18:08:50 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

char	*get_next_line(int fd)
{		
	char			*line;
	static char		*buf_pos;
	static char		*eol_pos;
	static char		buffer[BUFFER_SIZE + 1];
	static int		offset;
	char			*substr;

	line = NULL;
	if (!buf_pos)
	{
		offset = read(fd, buffer, BUFFER_SIZE);
		buffer[offset] = '\0';
		if (offset <= 0)
			return (NULL);
		buf_pos = buffer;
	}
	while (1)
	{
		if (!buf_pos)
		{
			offset = read(fd, buffer, BUFFER_SIZE);
			buffer[offset] = '\0';
			if (offset <= 0)
				return (line);
			buf_pos = buffer;
		}
		eol_pos = eol_check(buf_pos);
		if (!eol_pos)
		{
			line = write_new(&line, buf_pos);
			if (!line)
				return (NULL);
			buf_pos = NULL;
		}
		if (eol_pos)
		{
			substr = ft_substr(buf_pos, 0, eol_pos - buf_pos + 1);
			if (!substr)
				return (NULL);
			line = write_new(&line, substr);
			free(substr);
			if (!line)
				return (NULL);
			if (*(eol_pos + 1) == '\0')
				buf_pos = NULL;
			else
				buf_pos = eol_pos + 1;
			return (line);
		}
	}
	return (line);
}

int main()
{
	int 	fd;
	char	*next_line;

	fd = open ("test.txt", O_RDONLY);	
	if (fd == -1)
	{
		printf("\nERROR OPENING FILE\nDESCRIPTOR %d IS INVALID\n", fd);
		return (0);
	}
	printf("\nOpened file on descriptor %d\n", fd);
	while ((next_line = get_next_line(fd)))
	{
		printf("%s" , next_line);
		free(next_line);
	}
	if (next_line)
		free(next_line);
	close(fd);
	printf("\n\nFILE %d CLOSED\n\n", fd);
	fd = open("test.txt", O_RDONLY);
	return (0);
}

