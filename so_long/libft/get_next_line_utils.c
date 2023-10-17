/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:56:51 by aparvin           #+#    #+#             */
/*   Updated: 2023/10/17 13:56:52 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	gnl_strlen(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

char	*gnl_strchr(char *s, int c)
{
	if (!s)
		return (0);
	while (*s && *s != (char)c)
		s++;
	if (*s == (char)c)
		return ((char *)s);
	return (0);
}

char	*gnl_strjoin(char *rem_txt, char *buffer)
{
	size_t	i;
	size_t	j;
	char	*mal;

	i = 0;
	j = 0;
	mal = malloc(sizeof(char) * (gnl_strlen(rem_txt) + gnl_strlen(buffer)) + 1);
	if (!mal)
		return (0);
	if (rem_txt)
	{
		while (rem_txt[i])
		{
			mal[i] = rem_txt[i];
			i++;
		}
		free(rem_txt);
	}
	while (buffer[j])
	{
		mal[i + j] = buffer[j];
		j++;
	}
	mal[i + j] = '\0';
	return (mal);
}
