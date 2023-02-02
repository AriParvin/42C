/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstein <hstein@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 19:38:15 by hstein            #+#    #+#             */
/*   Updated: 2023/01/26 19:38:15 by hstein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static t_variables	vars;

	vars.fd = fd;
	vars.line = NULL;
	if (!vars.buff_idx)
	{
		vars.buff_len = read(vars.fd, vars.buffer, BUFFER_SIZE);
		vars.buffer[vars.buff_len] = '\0';
		if (vars.buff_len <= 0)
			return (NULL);
		vars.buff_idx = vars.buffer;
	}
	vars.line = ft_magic(&vars);
	return (vars.line);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	len_s1_prefix;
	size_t	len_s2_suffix;
	size_t	i;

	len_s1_prefix = ft_strlen(s1);
	len_s2_suffix = ft_strlen(s2);
	join = malloc(len_s1_prefix + len_s2_suffix + 1);
	if (!join)
		return (NULL);
	ft_strlcpy(join, s1, len_s1_prefix + 1);
	i = 0;
	while (join[i] && i < (len_s1_prefix + len_s2_suffix + 1))
		i++;
	ft_strlcpy(&join[i], s2, (len_s1_prefix + len_s2_suffix + 1) - i);
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

char	*ft_substr(char const *s, size_t start, size_t len)
{
	char	*new_s;
	size_t	new_len;
	char	*src;
	char	*emptystr;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
	{
		emptystr = malloc(1);
		if (!emptystr)
			return (NULL);
		*emptystr = '\0';
		return (emptystr);
	}
	src = (char *)s + start;
	if (ft_strlen(src) < len)
		new_len = ft_strlen(src) + 1;
	else
		new_len = len + 1;
	new_s = (char *)malloc(new_len * sizeof(char));
	if (!new_s)
		return (NULL);
	ft_strlcpy(new_s, src, new_len);
	return (new_s);
}
