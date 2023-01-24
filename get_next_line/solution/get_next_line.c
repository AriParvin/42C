/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 19:05:03 by aparvin           #+#    #+#             */
/*   Updated: 2023/01/24 19:05:07 by aparvin          ###   ########.fr       */
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
	/* 
	We enter this condition in two cases:
		- when we call get next line the first time
		- when buff_idx is set to NULL. This happens when we reach the end of the buffer without to find a new line char
	*/
	if (!buff_idx)
	{
		buff_len = read(fd, buffer, BUFFER_SIZE);
		//buff_len = ft_read(buffer, &buff_idx, fd);
		buffer[buff_len] = '\0';
		if (buff_len <= 0)
			return (NULL);
		buff_idx = buffer;
	}
	
	while (1)
	{
		/* 
		- We enter this condition coming back from the while loop in just one case: we don't find a new line char in the buffer, from the position we were reading
		- It is the only time we read in the while loop
		- It is exactly the same the one we have otuside the loop: the only differnce is the fact the we return line and not NULL if read gives back 0 or less than 0 
		*/
		if (!buff_idx)
		{
			buff_len = read(fd, buffer, BUFFER_SIZE);
			buffer[buff_len] = '\0';
			if (buff_len <= 0)
				return (line);
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
			
			// the next line was the only one in this if condition	
			// ft_write_old(&line, &buff_idx, n_idx);

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

/* NEW ft_n_idx aka ft_checkforeol*/
char *ft_n_idx(char *ptr_buff_idx)
{
	int i;

	i = 0;
	while(ptr_buff_idx[i] != '\0')
	{
		if (ptr_buff_idx[i] == '\n')
			return (&ptr_buff_idx[i]);
		i++;
	}
	return (NULL);
}

/* ft_n_idx AKA ft_checkforeol, which try to solve the problem of the 1char.txt. Which was the problen? The buffer has no new line char and only 1 buffer si read. The second time the buffer is read, read returns - 1*/

/* ft_n_idx AKA ft_checkforreal
char	*ft_n_idx(char **ptr_buff_idx, int buff_len)
{
	int	i;
	char	*n_idx;

	i = 0;
	while (*(*ptr_buff_idx + i) != '\0' && buff_len > 0)
	{
		if (*(*ptr_buff_idx + i) == '\n')
		{
			n_idx = (*ptr_buff_idx + i);
			return (n_idx);
		}
		i++;
	}
	// I'm not sure if we need this check also here
	if (buff_len <= 0)
		*ptr_buff_idx = NULL;
	return (NULL);
}
*/
char	*ft_write_new(char **ptr_line, char *ptr_buff_idx)
{
	char	*line;

	if (*ptr_line == NULL)
	{
		*ptr_line = malloc(1);
		if (!*ptr_line)
			return (NULL);
		*(ptr_line[0]) = '\0';
	}
	line = ft_strjoin(*ptr_line, ptr_buff_idx);
	if (!line)
		return (NULL);
	free(*ptr_line);
	return (line);
}

/* 
	kWe don't use this anymore
	Instead we use the code directly in the main while
	if n_idx has a value
*/
/*
void	ft_write_old(char **line, char **buff_idx, char *n_idx)
{
	char *line_tail;
	line_tail = ft_substr(*buff_idx, 0, n_idx - *buff_idx + 1);
	*line = ft_write_new(line, line_tail);
	*buff_idx = n_idx + 1;
	if (**buff_idx == '\0')
		*buff_idx = NULL;
}
*/
/* We don't use ft_read anymore
instead we read directly in the main loop 
*/
/*
int	ft_read(char *buffer, char **buff_idx, int fd)
{
	int	buff_len;

	buff_len = read(fd, buffer, BUFFER_SIZE);
	*buff_idx = buffer;
	return (buff_len);
}

*/
