/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 13:26:22 by aparvin           #+#    #+#             */
/*   Updated: 2023/06/28 13:26:27 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFFER_SIZE 1

# include <stddef.h>
# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

size_t		gnl_strlen(const char *s);
int			gnl_strchr(char *s, char c);
char		*gnl_strjoin(char *s1, char *s2);
void		*gnl_calloc(size_t count, size_t size);

char		*get_next_line(int fd);

#endif
