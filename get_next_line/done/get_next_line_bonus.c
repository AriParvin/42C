/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:07:55 by aparvin           #+#    #+#             */
/*   Updated: 2023/02/13 16:30:00 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#define MAX_FD 1024

char	*get_next_line(int fd)
{
	char			*n_idx;
	char			*line;
	static char		*stash_arr[MAX_FD];

	stash_arr[fd] = ft_read_bonus(fd, stash_arr[fd]);
	if (!stash_arr[fd] || fd < 0)
		return (NULL);
	n_idx = ft_n_idx_bonus(stash_arr[fd]);
	if (!n_idx)
	{
		line = ft_substr_b(stash_arr[fd], 0, ft_strlen_b(stash_arr[fd]));
		free(stash_arr[fd]);
		stash_arr[fd] = NULL;
		return (line);
	}
	line = ft_substr_b(stash_arr[fd], 0, n_idx - stash_arr[fd] + 1);
	if (!line)
	{
		free (stash_arr[fd]);
		stash_arr[fd] = NULL;
		return (NULL);
	}
	stash_arr[fd] = ft_memmove_bonus(stash_arr[fd], n_idx + 1, \
			(ft_strlen_b(n_idx + 1) + 1));
	return (line);
}

char	*ft_n_idx_bonus(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '\n')
			return (&s[i]);
		i++;
	}
	return (NULL);
}

char	*ft_write_new_bonus(char **ptr_stash, char *ptr_buff)
{
	char	*str;

	if (*ptr_stash == NULL)
	{
		*ptr_stash = malloc(1);
		if (!*ptr_stash)
			return (NULL);
		**ptr_stash = '\0';
	}
	str = ft_strjoin_bonus(*ptr_stash, ptr_buff);
	if (!str)
	{
		free(*ptr_stash);
		*ptr_stash = NULL;
		return (NULL);
	}
	free(*ptr_stash);
	*ptr_stash = NULL;
	return (str);
}

int	ft_read_check_bonus(char **stash_ptr, int buff_len)
{
	if (buff_len == -1)
	{
		free(*stash_ptr);
		*stash_ptr = NULL;
		return (-1);
	}
	if (buff_len == 0)
	{
		if (*stash_ptr && (*stash_ptr)[0] == '\0')
		{
			free(*stash_ptr);
			*stash_ptr = NULL;
			return (0);
		}
		return (0);
	}
	return (1);
}

char	*ft_read_bonus(int fd, char *stash)
{
	int		buff_len;
	int		read_check;
	char	*buffer;	

	buffer = malloc(sizeof(char) * BUFFER_SIZE + 1);
	while (1)
	{
		buff_len = read(fd, buffer, BUFFER_SIZE);
		read_check = ft_read_check_bonus(&stash, buff_len);
		if (read_check == -1)
			break ;
		if (read_check == 0)
			break ;
		buffer[buff_len] = '\0';
		stash = ft_write_new_bonus(&stash, buffer);
		if (!stash)
			return (NULL);
		if (ft_n_idx_bonus(stash) || buff_len < BUFFER_SIZE)
			break ;
	}
	free (buffer);
	buffer = NULL;
	return (stash);
}
