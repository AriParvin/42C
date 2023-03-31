/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 11:16:32 by aparvin           #+#    #+#             */
/*   Updated: 2023/03/24 11:28:19 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rras(t_stacka *ptr)
{
	int		i;
	char	*tmp;

	i = 0;
	tmp = NULL;
	while (ptr->arg[i])
	{
		if (ptr->arg[i + 1])
		{
			tmp = (ptr->arg[i + 1]);
			ptr->arg[i + 1] = (ptr->arg[i]);
			ptr->arg[i] = tmp;
			ptr->index = i;
		}
		i++;
	}
	if (ft_atoi(ptr->arg[0]) != ptr->lastnum)
		rras(ptr);
	if (ptr->arg[0])
		ptr->firstnum = ptr->lastnum;
	if (i)
		ptr->lastnum = ft_atoi(ptr->arg[i - 1]);
}

void	ras(t_stacka *ptr)
{
	int		i;
	char	*tmp;

	i = 0;
	tmp = NULL;
	if (!ptr->arg)
		return ;
	while (ptr->arg[i])
	{
		if (ptr->arg[i + 1])
		{
			tmp = (ptr->arg[i]);
			ptr->arg[i] = (ptr->arg[i + 1]);
			ptr->arg[i + 1] = tmp;
		}
		i++;
	}
	if (i && ptr->arg[i - 1] && ft_atoi(ptr->arg[i - 1]) != ptr->firstnum)
		ras(ptr);
	ptr->firstnum = ft_atoi(ptr-arg[0]);
	if (i)
		ptr->lastnum = ft_atoi(ptr->arg[i - 1]);
}
