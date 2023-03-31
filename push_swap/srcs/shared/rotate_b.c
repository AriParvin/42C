/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 11:29:25 by aparvin           #+#    #+#             */
/*   Updated: 2023/03/24 11:56:57 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrbs(t_stackb *ptr)
{
	int		i;
	char	*tmp;

	tmp = NULL;
	if (!ptr || !ptr->arg)
		return ;
	i = 0;
	while (ptr->arg[i])
	{
		if (ptr->arg[i + 1])
		{
			tmp = (ptr->arg[i + 1]);
			ptr->arg[i + 1] = (ptr->arg[i]);
			ptr->arg[i] = tmp;
		}
		i++;
	}
	if (ft_atoi(ptr->arg[0] != ptr->lastnum)
			rrbs(ptr);
	if (ptr->arg[0])
		ptr->firstnum = ft_atoi(ptr->arg[0]);
	if (i)
		ptr->lastnum = ft_atoi(ptr->arg[i - 1]);
}

void	rbs(t_stackb *ptr)
{
	int		i;
	char	*tmp;

	i = 0;
	tmp = NULL;
	if (!ptr->arg || !ptr->arg[0])
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
	if (ft_atoi(ptr->arg[i - 1]) != ptr->firstnum)
		rbs(ptr);
	ptr->firstnum = ft_atoi(ptr->arg[0]);
	if (i)
		ptr->lastnum = ft_atoi(ptr->arg[i - 1]);
}
