/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 12:17:07 by aparvin           #+#    #+#             */
/*   Updated: 2023/06/19 17:16:18 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	do_commands(char *line, t_stack **first, t_stack **second)
{
	if (!(ft_strcmp(line, "sa")))
		return (sab(first));
	if (!(ft_strcmp(line, "sb")))
		return (sab(second));
	if (!(ft_strcmp(line, "ss")))
		return (ss(first, second));
	if (!(ft_strcmp(line, "pa")))
		return (pab(first, second));
	if (!(ft_strcmp(line, "pb")))
		return (pab(second, first));
	if (!(ft_strcmp(line, "ra")))
		return (rab(first));
	if (!(ft_strcmp(line, "rb")))
		return (rab(second));
	if (!(ft_strcmp(line, "rr")))
		return (rr(first, second));
	if (!(ft_strcmp(line, "rra")))
		return (rrab(first));
	if (!(ft_strcmp(line, "rrb")))
		return (rrab(second));
	if (!(ft_strcmp(line, "rrr")))
		return (rrr(first, second));
	return (1);
}

int	return_errors(char **line, t_stack **stack1, t_stack **stack2)
{
	ft_strdel(line);
	if (*stack1)
		stack_del(stack1);
	if (*stack2)
		stack_del(stack2);
	write(2, "ERROR\n", 6);
	return (0);
}

int	stack_is_sorted(t_stack *first)
{
	t_stack	*stack;

	stack = first;
	while (stack->next)
	{
		if (stack->num >= stack->next->num)
			return (1);
		stack = stack->next;
	}
	return (0);
}

void	print_checker_res(t_stack **first, t_stack **second)
{
	if (!(stack_is_sorted(*first)) && !(*second))
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	if (*first)
		stack_del(first);
	if (*second)
		stack_del(second);
}

int	main(int ac, char **av)
{
	t_stack	*first;
	t_stack	*second;
	char	line;

	if (ac < 2)
		return (0);
	if (!(first == copy_args_in_stack(ac, av)))
	{
		write(2, "ERROR\n", 6);
		return (0);
	}
	second = NULL;
	while (get_next_line(0, &line))
	{
		if (do_commands(line, &first, &second))
			return (return_errors(&line, &first, &second));
		ft_strdel(&line);
	}
	print_checker_res(&first, &second);
	return (0);
}
