#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "get_next_line.h"

int	main(void)
{
	char	*next_line;
	int		fd;

	//fd = open("file5.txt", O_RDONLY);
	fd = open("test_files/variable_nls.txt", O_RDONLY);
	if (fd == -1)
	{
		printf("ERROR: opening file\n");
		return (0);
	}
	printf("File open with file descriptor %d\n", fd);
	while ((next_line = get_next_line(fd)))
	{
		printf("%s", next_line);
		//printf("\n");
		//printf("p:%p", next_line);
		free(next_line);
	}
	/*
	printf("\n");
	printf("LAST POINTER\n");
	printf("p:%p", next_line);
	printf("\n");
	*/
	if (next_line)
	{
		free(next_line);
	}
	close(fd);
	printf("File %d closed\n\n", fd);
	
	/*		
	void *null_ptr;
	null_ptr = NULL;

	printf("NULL POINTER\n");
	printf("%p\n", null_ptr);
	*/	
	/*
	fd = open("1char.txt", O_RDONLY);
	

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
