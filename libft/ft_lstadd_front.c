/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 15:51:27 by aparvin           #+#    #+#             */
/*   Updated: 2023/01/03 16:35:03 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	struct	t_list *new_node = (struct t_list*) malloc(sizeof(struct Node));
	new_node->data = new;
	new_node->next = (*lst);
	(*lst) = new;
}
