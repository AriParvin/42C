/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_digit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 20:24:17 by aparvin           #+#    #+#             */
/*   Updated: 2023/03/05 20:31:33 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void err_exit(void)
{
	ft_putstr_fd("ERROR\n", 2);
	exit (1);
}

int	check_digit(char **av)
{
	int	i;
	int	ii;

	i = 0;
	while (av[i])
	{
		ii = 0;
		while (av[i][ii])
		{
			if (!ft_isdigit(av[i][ii]))
				err_exit();
			if (av[i][ii] == '-' && !av[i][ii + 1])
				err_exit();
			ii++;
		}
		if (ft_atol(ag[i]) > INT_MAX || ft_atol(ag[i]) < INT_MIN)
			err_exit();
		i++;
	}
	return (0);
}
