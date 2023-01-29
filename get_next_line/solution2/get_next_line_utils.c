#include "get_next_line.h"

int check_newline(const char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == '\n')
			return (1);
		i++;
    }
	return (0);
}

char	*join_str(const char *s1, const char *s2)
{
	char	*str;
	int		len;
	int		i;

	len = 0;
	if (!s1 && !s2)
		(NULL);
	while (s1 && s1[len])
		len++;
	i = 0;
	while (s2 && s2[i])
		i++;
	str = malloc_zero(len + i + 1, sizeof * str);
	if (!str)
		return (NULL);
	len = -1;
	while (s1 && s1[++len])
		str[len] = s1[len];
	i = -1;
	while (s2 && s2[++i])
		str[len + i] = s2[i];
	return (str);
}

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		i;

	if (!s1)
		return (ft_strdup(""));
	i = 0;
	while (s1 [i])
		i++;
	s2 = malloc_zero(i + 1, sizeof * s2);
	if (!s2)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	return (s2);
}

void	*malloc_zero(size_t count, size_t size)
{
	void			*res;
	unsigned char	*ptr;
	size_t			total;

	total = count * size;
	res = malloc(total);
	if (!res)
		return (NULL);
	ptr = (unsigned char *)res;
	while (total != 0)
	{
		*ptr = '\0';
		ptr++;
		total--;
	}
	return (res);
}

void	free_str(char **str, char **str2, char **str3)
{
	if (str && *str)
	{
		free(*str);
		*str = NULL;
	}
	if (str2 && *str2)
	{
		free(*str2);
		*str2 = NULL;
	}
	if (str3 && *str3)
	{
		free(*str3);
		*str3 = NULL;
	}
}