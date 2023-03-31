/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:34:13 by aparvin           #+#    #+#             */
/*   Updated: 2023/03/23 12:47:20 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pbs(t_stacka *ptr, t_stackb **new, char *num)
{
	print_pb(ptr->colors, ptr->fd);
	push_b(ptr, new, num);
}

t_stackb	*push_b(t_stacka *ptr, t_stackb **new, char *num)
{
	if (ptr && ptr->arg[1])
		ptr->firstnum = ft_atoi(ptr->arg[1]);
	if (!*new)
	{
		*new = malloc(sizeof(t_stackb));
		if (new == NULL)
			ft_putstr_fd("error : malloc\n", 2);
		(*new)->arg = malloc(sizeof(char *) * 2);
		if (new == NULL)
			ft_putstr_fd("error : malloc\n", 2);
		ft_bzero((*new)->arg, sizeof(char *));
		(*new)->arg[0] = (ptr->arg[0]);
		(*new)->arg[1] = NULL;
		(*new)->next = NULL;
		(*new)->size = 1;
		(*new)->fd = ptr->fd;
		(*new)->index = 0;
		(*new)->firstnum = ft_atoi(ptr->arg[0]);
		(*new)->lastnum = ft_atoi(ptr->arg[0]);
		return (*new);
	}
	else
		add_first(*new, num);
	return (*new);
}

void	delete_num_stackb(t_stackb *ptr)
{
	int		i;
	int		size;

	i = 0;
	if (!ptr->arg || !ptr->arg[0])
		return ;
	size = size_arg(ptr->arg);
	while (ptr->arg[i])
	{
		ptr->arg[i] = ptr->arg[i + 1];
		i++;
	}
	ptr->size = size - 1;
	if (ptr->arg[0])
		ptr->firstnum = ft_atoi(ptr->arg[0]);
}
