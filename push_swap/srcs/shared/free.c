/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 09:13:27 by aparvin           #+#    #+#             */
/*   Updated: 2023/03/06 09:18:20 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_2d(char **av)
{
	int	i;

	i = 0;
	while (av[i])
		free(av[i++]);
	free(av);
	av = NULL;
}

void	free_stacka(t_stacka *a)
{
	int	i;

	i = 0;
	while (a->arg[i])
	{
		free(a->arg[i]);
		i++;
	}
	free(a->arg);
	a->arg = NULL;
	free(a);
	a = NULL;
}

void	free_stackb(t_stackb *b)
{
	free(b->arg);
	b->arg = NULL;
	free(b);
	b = NULL;
}
