/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 09:05:08 by aparvin           #+#    #+#             */
/*   Updated: 2023/04/04 15:08:49 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	free_memory(char **tmp, char **origin, char **result)
{
	int		i;

	i = 0;
	while (tmp[i])
	{
		free(tmp[i]);
		i++;
	}
	free(tmp);
	ft_strdel(origin);
	ft_strdel(result);
}

void		print_final_result(char *origin)
{
	char	**tmp;
	char	*result;
	int		i;

	i = 0;
	result = ft_strdup("\0");
	tmp = ft_strsplit(origin, '\n');
	while (tmp[i])
	{
		if (tmp[i] && (ft_strequ(tmp[i], "pa") || ft_strequ(tmp[i], "pb")))
			i = add_pa_pb(tmp, &result, i);
		if (tmp[i] && (ft_strequ(tmp[i], "ra") || ft_strequ(tmp[i], "rra")))
			i = add_ra_rra(tmp, &result, i);
		if (tmp[i] && (ft_strequ(tmp[i], "rb") || ft_strequ(tmp[i], "rrb")))
			i = add_rb_rrb(tmp, &result, i);
		if (tmp[i] && !(ft_strequ(tmp[i], "pa") || ft_strequ(tmp[i], "pb") ||
			ft_strequ(tmp[i], "ra") || ft_strequ(tmp[i], "rb") ||
			ft_strequ(tmp[i], "rra") || ft_strequ(tmp[i], "rrb")))
			i = add_others(tmp, &result, i);
	}
	ft_printf("%s", result);
	free_memory(tmp, &origin, &result);
}

