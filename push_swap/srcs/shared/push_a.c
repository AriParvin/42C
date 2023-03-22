/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 01:45:37 by aparvin           #+#    #+#             */
/*   Updated: 2023/03/22 02:05:57 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	push_a_delete(t_stacka *a, t_stackb **b, int pivot)
{
	if (ft_atoi(a->arg[0]) <= pivot)
	{
		pbs(a, b, a->arg[0]);
		delete_num(&a);
	}
}

void	pas(t_stacka *ptr, t_stackb *b, char *num)
{
	print_pa(ptr->colors, ptr->fd);
	push_a(ptr, b, num);
}

void	push_a(t_stacka *ptr, t_stackb *b, char *num)
{
	char	**av;
	int		size;
	int		i;
	int		j;

	i = 1;
	j = 0;
	size = size_arg(ptr->arg) + 1;
	av = NULL;
	if (b->arg[1])
		b->firstnum = ft_atoi(b->arg[1]);
	av = malloc(sizeof(char *) * (size + 1));
	ptr->size = size + 1;
	av[size] = NULL;
	av[0] = (number);
	ptr->lastnum = ft_atoi(av[0]);
	while (ptr->arg[j])
	{
		av[i] = (ptr->arg[j]);
		j++;
		i++;
	}
	free(ptr->arg);
	ptr->arg = NULL;
	ptr->arg = av;
}
