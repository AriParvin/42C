/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 12:32:32 by aparvin           #+#    #+#             */
/*   Updated: 2023/03/05 23:23:00 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <string.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include <fcntl.h>
# include "../libft/libft.h"
# define BUFFER_SIZE 100

typedef struct	s_stacka
{
	char	**arg;
	int		index;
	int		size;
	int		minval;
	int		firstnum;
	int		lastnum;
	int		colors;
	int		show;
	int		fd;
	struct s_stacka *next;
}	t_stacka; 

typedef struct s_stackb
{
	char	**arg;
	int		index;
	int		size;
	int		minval;
	int		firstnum;
	int		lastnum;
	int		colors;
	int		show;
	int		fd;
	struct	s_stackb *next;
}	t_stackb;

//push_swap.c
int		check_digit(**arg);
void	add_new(t_stacka **ptr, char **av);
void	check_param(t_stacka *a, char **av);
void	free_2d(char **av);

//srcs/tools/check.c
int		check_double(char **arg);

//check_digit.c
void	err_exit(void);

//ft_atol.c
long long	ft_atol(const char *str);
#endif
