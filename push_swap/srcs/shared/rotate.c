/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 11:11:37 by aparvin           #+#    #+#             */
/*   Updated: 2023/03/24 11:15:02 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(t_stacka *a, t_stackb *b)
{
	rrbs(b);
	rras(a);
}

void	rr(t_stacka *a, t_stackb *b)
{
	rbs(b);
	ras(a);
}
