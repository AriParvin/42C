/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:09:55 by aparvin           #+#    #+#             */
/*   Updated: 2023/04/04 12:06:16 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 512
# include <stdlib.h>
# include <fcntl.h>

typedef struct		s_line
{
	char			*data;
	int				fd;
	struct s_line	*next;
}					t_line;
int					get_next_line(const int fd, char **line);

#endif
