/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:09:55 by aparvin           #+#    #+#             */
/*   Updated: 2023/02/13 16:30:33 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42 
# endif

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stddef.h>
# include <ctype.h>
# include <fcntl.h>

char			*get_next_line(int fd);
char			*ft_n_idx_bonus(char *ptr_buff_idx);
char			*ft_read_bonus(int fd, char *stash);
char			*ft_write_new_bonus(char **ptr_stash, char *ptr_buff_idx);
char			*ft_strjoin_bonus(char const *s1, char const *s2);
int				ft_check_bonus(char **ptr_stash, int buff_len);
char			*ft_substr_b(char const *s, unsigned int start, size_t len);
void			*ft_memmove_bonus(void *dest, const void *src, size_t n);
size_t			ft_strlen_b(const char *s);
size_t			ft_strlcpy_bonus(char *dst, const char *src, size_t dstsize);

#endif
