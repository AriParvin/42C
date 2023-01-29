/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 19:06:33 by aparvin           #+#    #+#             */
/*   Updated: 2023/01/24 19:06:45 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1_prefix;
	size_t	len_s2_suffix;
	char	*join;

	len_s1_prefix = ft_strlen(s1);
	len_s2_suffix = ft_strlen(s2);
	join = malloc(len_s1_prefix + len_s2_suffix + 1);
	if (!join)
		return (NULL);
	ft_strlcpy(join, s1, len_s1_prefix + 1);
	ft_strlcat(join, s2, len_s1_prefix + len_s2_suffix + 1);
	return (join);
}

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char		*ptr_dst;
	const char	*ptr_src;
	size_t		i;

	ptr_dst = dst;
	ptr_src = src;
	i = 0;
	if (dstsize > 0)
	{
		while (i < dstsize - 1 && *(ptr_src + i) != '\0')
		{
			*(ptr_dst + i) = *(ptr_src + i);
			i++;
		}
		*(ptr_dst + i) = '\0';
	}
	return (ft_strlen(src));
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (*dst && i < dstsize)
	{
		dst++;
		i++;
	}
	return (ft_strlcpy(dst, src, dstsize - i) + i);
}

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	strsize;

	strsize = ft_strlen(s) + 1;
	dup = malloc(strsize);
	if (dup)
	{
		ft_strlcpy(dup, s, strsize);
		return (dup);
	}
	return (NULL);
}

void	*ft_calloc(size_t count, size_t size)
{
	char			*dst;
	unsigned int	total;
	unsigned int	i;

	total = count * size;
	dst = malloc(total);
	if (!dst)
		return (NULL);
	i = 0;
	while (total--)
	{
		dst[i] = 0;
		i++;
	}
	return ((void *)dst);
}

char	*ft_substr(const char *s, size_t start, size_t len)
{
	char	*temp;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if ((size_t)start > len)
	{
		temp = malloc(1);
		if (temp == NULL)
			return (NULL);
		temp[0] = '\0';
		return (temp);
	}
	temp = ft_calloc((len + 1), sizeof(char));
	if (temp == NULL)
		return (NULL);
	while (start < (unsigned int)len)
	{
		temp[i] = s[start];
		i++;
		start++;
	}
	return (temp);
}

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

char	*ft_n_idx(char *ptr_buff_idx)
{
	int	i;

	i = 0;
	while (ptr_buff_idx[i] != '\0')
	{
		if (ptr_buff_idx[i] == '\n')
			return (&ptr_buff_idx[i]);
		i++;
	}
	return (NULL);
}
