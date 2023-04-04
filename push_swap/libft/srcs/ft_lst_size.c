/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_size.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 22:34:32 by aparvin           #+#    #+#             */
/*   Updated: 2023/04/04 22:34:35 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lst_size(t_list **alst)
{
	int		n;
	t_list	*list;

	if (!(*alst))
		return (0);
	n = 0;
	list = *alst;
	while (list)
	{
		list = list->next;
		n++;
	}
	return (n);
}
