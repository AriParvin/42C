#include "get_next_line_bonus.h"

char	*pre_newline(const char *str)
{
	char	*res;
	int		i;

	i = 0;
	while ((str[i]) != '\0' && str[i] != '\n')
		i++;
	if (str[i] != '\0' && str[i] == '\n')
		i++;
	res = malloc_zero(i + 1, sizeof * res);
	if (!res)
		return (NULL);
	i = 0;
	while (str[i] != '\0' && str[i] != '\n')
	{
		res[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
	{
		res[i] = str[i];
		i++;
	}
	return (res);
}

char	*post_newline(const char *str)
{
	char	*res;
	int		i;
	int		ii;

	ii = 0;
	while (str && str[ii])
		ii++;
	i = 0;
	while (str[i] != '\0' && str[i] != '\n')
		i++;
	if (str[i] != '\0' && str[i] == '\n')
		i++;
	res = malloc_zero((ii - i) + 1, sizeof * res);
	if (!res)
		return (NULL);
	ii = 0;
	while (str[i + ii])
	{
		res[ii] = str[i + ii];
		ii++;
	}
	return (res);
}

void	read_line(int fd, char **keep, char **tmp)
{
	char	*buf;
	int		offset;

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

char	*parse_line(char **keep, char **tmp)
{
	char	*line;

	*tmp = ft_strdup(*keep);
	free_str(keep, 0, 0);
	*keep = post_newline(*tmp);
	line = pre_newline(*tmp);
	free_str(tmp, 0, 0);
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*keep[1024];
	char		*tmp;
	char		*line;

	if (fd < 0 || fd >= 1024 || BUFFER_SIZE <= 0)
		return (NULL);
	line = NULL;
	tmp = NULL;
	read_line(fd, &keep[fd], &tmp);
	if (keep[fd] != NULL && *keep[fd] != '\0')
		line = parse_line(&keep[fd], &tmp);
	if (!line || *line == '\0')
	{
		free_str(&keep[fd], &line, &tmp);
		return (NULL);
	}
	return (line);
}