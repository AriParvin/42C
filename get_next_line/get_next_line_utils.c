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

char	*eol_check(char **buffer, size_t offset)
{
	size_t	i;
	char	*eol_position;

	i = 0;
	while (*(*buffer + i) != '\0' && offset > 0)
	{
		if (*(*buffer + i) == '\n')
		{
			eol_position = (*buffer + i);
			return (eol_position);
		}
		offset++;
		i++;
	}
	if (offset == 0)
		*buffer = NULL;
	return (NULL);
}

char	*strjoin_plus(char **s1, char *s2)
{
	char	*result;

	if (*s1 == NULL)
	{
		*s1 = malloc(1);
		if (!*s1)
			return (NULL);
		*s1[0] = '\0';
	}
	result = ft_strjoin(*s1, s2);
	if (!result)
		return (NULL);
	free(*s1);
	return (result);
}

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_prefix_len;
	size_t	s2_suffix_len;
	char	*join;

	s1_prefix_len = ft_strlen(s1);	
	s2_suffix_len = ft_strlen(s2);	
	join = malloc(s1_prefix_len + s2_suffix_len + 1);
	if (!join)
		return (NULL);
	ft_strlcpy(join, s1, s1_prefix_len + 1);
	ft_strlcat(join, s2, s1_prefix_len + s2_suffix_len + 1);
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

size_t	ft_strlcpy(char *dst, const char *src, size_t dst_len)
{
	char		*dst_ptr;
	const char	*src_ptr;
	size_t		i;

	dst_ptr = dst;
	src_ptr = src;
	i = 0;
	if (dst_len > 0)
	{
		while (i < dst_len - 1 && *(src_ptr + i) != '\0')
		{
			*(dst_ptr + i) = *(src_ptr + i);
			i++;
		}
		*(dst_ptr + i) = '\0';
	}
	return (ft_strlen(src));
}

size_t	ft_strlcat(char *dst, const char *src, size_t dst_len)
{
	size_t	i;

	i = 0;
	while (*dst && i < dst_len)
	{
		dst++;
		i++;
	}
	return (ft_strlcpy(dst, src, dst_len - i) + i);
}

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	str_len;

	str_len = ft_strlen(s) + 1;
	dup = malloc(str_len);
	if (dup)
	{
		ft_strlcpy(dup, s, str_len);
		return (dup);
	}
	return (NULL);
}

char	*ft_substr(char const *str, size_t start, size_t len)
{
	char	*str_new;
	size_t	len_new;
	char	*src;

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
