/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 23:14:41 by aparvin           #+#    #+#             */
/*   Updated: 2023/03/05 23:19:48 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_before(char **av, char *str, int len)
{
	int	i;

	i = 0;
	while (av[i] && i < len)
	{
		if (!ft_strcmp(ag[i], str))
			return (0);
		i++;
	}
	return (1);
}

int	check_double(char **av)
{
	int	i;

	i = 0;
	while (av[i])
	{
		if (!check_before(av, av[i], i))
			err_exit();
		i++;
	}
	return (1);
}#include "push_swap.h"

int	check_before(char **av, char *str, int len)
{
	int	i;

	i = 0;
	while (av[i] && i < len)
	{
		if (!ft_strcmp(ag[i], str))
			return (0);
		i++;
	}
	return (1);
}

int	check_double(char **av)
{
	int	i;

	i = 0;
	while (av[i])
	{
		if (!check_before(av, av[i], i))
			err_exit();
		i++;
	}
	return (1);
}#include "push_swap.h"

int	check_before(char **av, char *str, int len)
{
	int	i;

	i = 0;
	while (av[i] && i < len)
	{
		if (!ft_strcmp(ag[i], str))
			return (0);
		i++;
	}
	return (1);
}

int	check_double(char **av)
{
	int	i;

	i = 0;
	while (av[i])
	{
		if (!check_before(av, av[i], i))
			err_exit();
		i++;
	}
	return (1);
}#include "push_swap.h"

int	check_before(char **av, char *str, int len)
{
	int	i;

	i = 0;
	while (av[i] && i < len)
	{
		if (!ft_strcmp(ag[i], str))
			return (0);
		i++;
	}
	return (1);
}

int	check_double(char **av)
{
	int	i;

	i = 0;
	while (av[i])
	{
		if (!check_before(av, av[i], i))
			err_exit();
		i++;
	}
	return (1);
}
