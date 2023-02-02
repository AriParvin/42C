/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstein <hstein@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 19:38:23 by hstein            #+#    #+#             */
/*   Updated: 2023/01/26 19:38:23 by hstein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "get_next_line.h"

int	ft_magic_a(t_variables *ptr_vars)
{
	int	eofflag;

	eofflag = 1;
	ptr_vars->buff_len = read(ptr_vars->fd, ptr_vars->buffer, BUFFER_SIZE);
	ptr_vars->buffer[ptr_vars->buff_len] = '\0';
	if (ptr_vars->buff_len <= 0)
	{
		eofflag = 0;
		if (ptr_vars->buff_len == EOF)
		{
			free(ptr_vars->line);
			ptr_vars->line = NULL;
		}
		return (eofflag);
	}
	ptr_vars->buff_idx = ptr_vars->buffer;
	return (eofflag);
}

char	*ft_magic(t_variables *ptr_vars)
{
	while (1)
	{
		if (!ptr_vars->buff_idx)
		{
			if (!ft_magic_a(ptr_vars))
				return (ptr_vars->line);
		}
		ptr_vars->n_idx = ft_n_idx(ptr_vars->buff_idx);
		if (!ptr_vars->n_idx)
		{
			ptr_vars->line = ft_write_new(&(ptr_vars->line), \
				ptr_vars->buff_idx);
			if (!ptr_vars->line)
				return (NULL);
			ptr_vars->buff_idx = NULL;
		}
		if (ptr_vars->n_idx)
		{
			ptr_vars->line = ft_write_add(&(ptr_vars->line), \
				&(ptr_vars->buff_idx), ptr_vars->n_idx);
			return (ptr_vars->line);
		}
	}
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
	{
		free(*ptr_line);
		return (NULL);
	}
	free(*ptr_line);
	return (line);
}

char	*ft_write_add(char **ptr_line, char **ptr_buff_idx, char *n_idx)
{
	char	*substr;

	substr = ft_substr(*ptr_buff_idx, 0, n_idx - *ptr_buff_idx + 1);
	if (!substr)
		return (NULL);
	*ptr_line = ft_write_new(ptr_line, substr);
	free(substr);
	if (!*ptr_line)
		return (NULL);
	if (*(n_idx + 1) == '\0')
		*ptr_buff_idx = NULL;
	else
		*ptr_buff_idx = n_idx + 1;
	return (*ptr_line);
}
