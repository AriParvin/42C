/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 19:05:56 by aparvin           #+#    #+#             */
/*   Updated: 2023/01/24 19:06:07 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 32
# endif

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stddef.h>
# include <ctype.h>
# include <fcntl.h>

char	*get_next_line(int fd);
//char	*ft_n_idx(char **ptr_buff_idx, int buff_len);
char	*ft_n_idx(char *ptr_buff_idx);
//int	ft_read(char *buffer, char **pos_buffer, int fd);
char	*ft_write_new(char **ptr_line, char *ptr_buff_idx);
//void	ft_write_old(char **line, char **buff_idx, char *n_idx);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strdup(const char *s);
char	*ft_substr(char const *s, size_t start, size_t len);

#endif
