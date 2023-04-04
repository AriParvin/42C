/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_back.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 11:42:14 by aparvin           #+#    #+#             */
/*   Updated: 2023/04/04 11:50:52 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_back(t_stack **stack1, t_stack **stack2, t_com **result, int half)
{
	while (half > 0)
	{
		(*stack2)->diff = (*stack2)->diff == 1 ? 2 : 1;
		pab(stack1, stack2);
		if ((*stack1)->diff == 2)
			(*result)->final = add_to_string((*result)->final, "pb\n");
		else
			(*result)->final = add_to_string((*result)->final, "pa\n");
		half--;
	}
}

void	rotate_back(t_stack **stack, t_com **result, int back)
{
	if (s_len(*stack) == 2)
	{
		swap_two(stack, result);
		return ;
	}
	if (s_len(*stack) == 3)
	{
		swap_three(stack, result);
		return ;
	}
	while (back != 0)
	{
		rrab(stack);
		if ((*stack)->diff == 1)
			(*result)->final = add_to_string((*result)->final, "rra\n");
		else
			(*result)->final = add_to_string((*result)->final, "rrb\n");
		back--;
	}
}
