/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 19:07:13 by aparvin           #+#    #+#             */
/*   Updated: 2023/01/24 19:07:46 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "get_next_line.h"

int	main(void)
{
	char	*next_line;
	int		fd;

	fd = open("file.txt", O_RDONLY);
	if (fd == -1)
	{
		printf("ERROR: opening file\n");
		return (0);
	}
	printf("File open with file descriptor %d\n", fd);
	while ((next_line = get_next_line(fd)))
	{
		printf("%s", next_line);
		free(next_line);
	}
	if (next_line)
		free(next_line);
	close(fd);
	printf("File %d closed\n\n", fd);
	
	fd = open("file.txt", O_RDONLY);


	/*
	if (fd == -1)
	{
		printf("ERROR: opening file\n");
		return (0);
	}
	printf("File open with file descriptor %d\n", fd);
	while ((next_line = get_next_line(fd)))
	{
		printf("%s", next_line);
		free(next_line);
	}
	close(fd);
	printf("File %d closed\n\n", fd);
	*/
	return (0);
}
