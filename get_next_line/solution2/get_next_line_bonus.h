/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 13:06:16 by aparvin           #+#    #+#             */
/*   Updated: 2023/01/30 13:06:20 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <fcntl.h>
# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE BUFSIZ
# endif

# if BUFFER_SIZE > 9223372036854775806
#  undef BUFFER_SIZE
#  define BUFFER_SIZE 0
# endif

char	*get_next_line(int fd);
void	read_line(int fd, char **keep, char **tmp);
char	*parse_line(char **keep, char **tmp);
char	*pre_newline(const char *str);
char	*post_newline(const char *str);

int		check_newline(const char *str);
char	*ft_strdup(const char *s1);
char	*join_str(const char *s1, const char *s2);
void	*malloc_zero(size_t count, size_t size);
void	free_str(char **str, char **str2, char **str3);

#endif
