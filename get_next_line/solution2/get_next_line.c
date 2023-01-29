#include "get_next_line.h"

char    *pre_newline(const char *str)
{
    char    *result;
    int     i;

    i = 0;
    while (str[i] != '\0' && str[i] != '\n')
        i++;
    if (str[i] != '\0' && str[i] == '\n')
        i++;
    result = malloc_zero(i + 1, sizeof * result);
    if (!result)
        return (NULL);
    i = 0;
    while (str[i] != '\0' && str[i] != '\n')
    {
        result[i] = str[i];
        i++;
    }
    if (str[i] == '\n')
    {
        result[i] = str[i];
        i++;
    }
    return (result);
}

char    *post_newline(const char *str)
{
    char    *result;
    int     i;
    int     ii;

    ii = 0;
    while (str && str[ii])
        ii++;
    i = 0;
    while (str[i] != '\0' && str[i] != '\n')
        i++;
    result = malloc_zero((ii - i) + 1, sizeof * result);
    if (!result)
        return (NULL);
    ii = 0;
    while (str[i + ii])
    {
        result[ii] = str[i + ii];
        ii++;
    }
    return (result); 
}

void read_line(int fd, char **keep, char **tmp)
{
    char    *buf;
    int     offset;

    buf = malloc(sizeof * buf * (BUFFER_SIZE + 1));
    if (!buf)
        return ;
    offset = 1;
    while (offset > 0)
    {
        offset = read(fd, buf, BUFFER_SIZE);
        if (offset == -1)
        {
            free_str(&buf, keep, tmp);
            return ;
        }
        buf[offset] = '\0';
        *tmp = ft_strdup(*keep);
        free_str(keep, 0, 0);
        *keep = join_str(*tmp, buf);
        free_str(tmp, 0, 0);
        if (check_newline(*keep))
            break ;
    }
    free_str(&buf, 0, 0);
}

char    *parse_line(char **keep, char **tmp)
{
    char    *line;

    *tmp = ft_strdup(*keep);
    free_str(keep, 0, 0);
    *keep = post_newline(*tmp);
    line = pre_newline(*tmp);
    free_str(tmp, 0, 0);
    return (line);
}

char    *get_next_line(int fd)
{
    static char *keep;
    char        *tmp;
    char        *line;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);
    keep = NULL;
    line = NULL;
    tmp = NULL;
    read_line(fd, &keep, &tmp);
    if (keep != NULL && *keep != '\0')
        line = parse_line(&keep, &tmp);
    if (!line || *line == '\0')
    {
        free_str(&keep, &line, &tmp);
        return (NULL);
    }
    return (line);
}
/*
int	main(int argc, char **argv)
{
	int		fd;
	char	*line;

	(void)argc;
	fd = open(argv[1], O_RDONLY);
	line = "";
	while (line != NULL)
	{
		line = get_next_line(fd);
		printf("%s", line);
	}
	fd = close(fd);
	return (0);
}
*/
