/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:44:37 by aparvin           #+#    #+#             */
/*   Updated: 2023/01/23 17:30:42 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 32 
# endif

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>
#include <ctype.h>

char	*get_next_line(int fd);
char	*eol_check(char *buf_pos);
char    *write_new(char **line_ptr, char *buf_pos);
//char	*strjoin_plus(char **s1, char *s2);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t dst_len);
size_t	ft_strlcat(char *dst, const char *src, size_t dst_len);
char	*ft_strdup(const char *str);
char	*ft_substr(char const *str, size_t start, size_t len);

#endif