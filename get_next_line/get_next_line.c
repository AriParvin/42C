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

#define BUFFER_SIZE 42

char	*get_next_line(int fd)
{		
	char			*line;
	static char		*buf_pos;
	static char		*eol_pos;
	static char		buffer[BUFFER_SIZE];
	static size_t	offset;

	line = NULL;
	if (!buf_pos)
	{
		offset = read(fd, buffer, BUFFER_SIZE);
		//printf("\nRead bytes:\t%ld", offset);
		buf_pos = buffer;
	}
	while (1)
	{
		eol_pos = eol_check(&buf_pos, offset);
		if (!buf_pos)
			return (NULL);
		if (!eol_pos)
		{
			line = strjoin_plus(&line, buf_pos);
			offset = read(fd, buffer, BUFFER_SIZE);
			buf_pos = buffer;
		}
		if (eol_pos)
		{
			line = strjoin_plus(&line, ft_substr(buf_pos, 0, eol_pos - buf_pos + 1));
			buf_pos = eol_pos + 1;
			if (*buf_pos == '\0')
				buf_pos = NULL;
			break;
		}
	}
	return (line);
}

int main()
{
	int 	fd;

	fd = open("test.txt", O_RDONLY);	
	if (fd == -1)
	{
		printf("\nERROR OPENING FILE\nDESCRIPTOR %d IS INVALID\n", fd);
		return (0);
	}
	else
	{
		printf("\nOpened file on descriptor %d\n", fd);
		get_next_line(fd);
		close(fd);
		printf("\n\nFILE CLOSED\n\n");
		return (0);
	}
}
