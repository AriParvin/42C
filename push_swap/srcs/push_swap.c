/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 12:28:57 by aparvin           #+#    #+#             */
/*   Updated: 2023/03/05 20:14:14 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stacka *a)
{
	free(a->arg);
	free(a);
	if (a->fd)
		close(a->fd);
}

void	main_check(char **split)
{
	check_digit(split);
	check_double(split);
}

void	execute_algos(t_stacka *a, t_stackb *b, char **split)
{
	if (check_sort(a->arg))
		exit(0);
	if (size_arg(split) < 20)
		algo_under50(a, b);
	else if (size_arg(split) < 100)
		quick_sort(a, b, 3);
	else if (size_arg(split) >= 100 && size_arg(split) < 500)
		quick_sort(a, b, 4);
	else if (size_arg(split) >= 500)
		quick_sort(a, b, 8);
}

int		params(char **arg)
{
	if (!ft_strcmp(arg[1], "-c") || !ft_strcmp(ag[1], "-h")
			|| !ft_strcmp(ag[1], "-show") || !ft_strcmp(ag[1], "-s"))
			return (2);
	return (1);
}

int		main(int ac, char **av)
{
	t_stacka	*a;
	t_stackb	*b;
	char		**split;
	int			i;

	i = 1;
	b = NULL;
	if (ac > 1)
	{
		i = params(av);
		if (ac == 1 + i)
			split = ft_split(av[i], ' ');
		else
			split = (&av[i]);
		if (i > 1 && ac == 2)
			p_help();
		main_check(split);
		add_new(&a, split);
		check_param(a, av);
		execute_algos(a, b, split);
		if (ac == 1 + i)
			free_2d(split);
		free_stack(a);
	}
	return (0);
}
