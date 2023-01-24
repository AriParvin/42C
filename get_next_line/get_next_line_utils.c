/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:46:29 by aparvin           #+#    #+#             */
/*   Updated: 2023/01/23 17:34:46 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*eol_check(char *buf_pos)
{
	int i;

	i = 0;
	while(buf_pos[i] != '\0')
	{
		if (buf_pos[i] == '\n')
			return (&buf_pos[i]);
		i++;
	}

	return (NULL);
}

char	*write_new(char **line_ptr, char *buf_pos)
{
	char	*line;

	if (*line_ptr == NULL)
	{
		*line_ptr = malloc(1);
		if (!*line_ptr)
			return (NULL);
		*(line_ptr[0]) = '\0';
	}
	line = ft_strjoin(*line_ptr, buf_pos);
	if (!line)
		return (NULL);
	free(*line_ptr);
	return (line);
}
// char *eol_check(char **buffer, size_t offset)
// {
// 	size_t i;
// 	char *eol_position;

// 	i = 0;
// 	while (i < offset)
// 	{
// 		if (*(*buffer + i) == '\n')
// 		{
// 			eol_position = (*buffer + i);
// 			return (eol_position);
// 		}
// 		i++;
// 	}
// 	if (i == offset)
// 		*buffer = NULL;
// 	return (NULL);
// }

// char *strjoin_plus(char **s1, char *s2)
// {
// 	char *result;
// 	size_t len;

// 	if (*s1 == NULL || s2 == NULL)
// 		return (NULL);
// 	len = ft_strlen(s1) + ft_strlen(s2);
// 	result = (char *)malloc(sizeof(char) * (len + 1));
// 	if (result == NULL)
// 		return (NULL);
// 	ft_strcpy(result, s1);
// 	ft_strcat(result, s2);
// 	return (result);
// }

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t s1_prefix_len;
	size_t s2_suffix_len;
	char *join;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1_prefix_len = ft_strlen(s1);
	s2_suffix_len = ft_strlen(s2);
	join = malloc(s1_prefix_len + s2_suffix_len + 1);
	if (!join)
		return (NULL);
	ft_strlcpy(join, s1, s1_prefix_len + 1);
	ft_strlcat(join, s2, s1_prefix_len + s2_suffix_len + 1);
	return (join);
}

size_t ft_strlen(const char *s)
{
	size_t len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

size_t ft_strlcpy(char *dst, const char *src, size_t dst_len)
{
	size_t i;

	if (!dst || !src)
		return (0);
	i = 0;
	while (i < dst_len - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (dst_len > 0)
		dst[i] = '\0';
	return (ft_strlen(src));
}

size_t ft_strlcat(char *dst, const char *src, size_t dst_len)
{
	size_t i;

	if (!dst || !src)
		return (0);
	i = 0;
	while (*dst && i < dst_len)
	{
		dst++;
		i++;
	}
	return (ft_strlcpy(dst, src, dst_len - i) + i);
}

char *ft_strdup(const char *s)
{
	char *dup;
	size_t str_len;

	str_len = ft_strlen(s) + 1;
	dup = malloc(str_len);
	if (dup)
	{
		ft_strlcpy(dup, s, str_len);
		return (dup);
	}
	return (NULL);
}

char *ft_substr(char const *str, size_t start, size_t len)
{
	char *str_new;
	size_t len_new;
	char *src;

	if (!str)
		return (NULL);
	if (ft_strlen(str) < start)
		return (ft_strdup(""));
	src = (char *)str + start;
	if (ft_strlen(src) < len)
		len_new = len + 1;
	str_new = (char *)malloc(len_new * sizeof(char));
	if (!str_new)
		return (NULL);
	ft_strlcpy(str_new, src, len_new);
	return (str_new);
}
