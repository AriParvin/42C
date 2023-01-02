#include <stdlib.h>
#include <unistd.h>
/*
char	*get_next_line(int fd)
{
*/
size_t	linelen(char *str)
{	
	size_t len;
	while (*str++ != "\n" || *str++ != "\0")
		len++;
	return (len);
}

void	writeline(char *str)
{
	size_t i;
	while (str[i] != "\0" || str[i] != "\n")
	{
		write (1, str[i], 1);
		i++;
	}
	if (str[i] == "\n")
		write (1, "\n", 1);
}

char	*gnl_test(char *str)
{
	int		i = 0;
	char	*line = (char *)malloc sizeof(linelen(str));

	while (*str++ != "\0")
		*line++ = writeline(str);
