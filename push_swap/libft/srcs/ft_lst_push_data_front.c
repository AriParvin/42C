/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_push_data_front.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 22:32:09 by aparvin           #+#    #+#             */
/*   Updated: 2023/04/04 22:32:11 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_push_data_front(t_list **alst,
	void const *content, size_t content_size)
{
	t_list	*new;

	if (!(*alst))
		return ;
	new = ft_lstnew(content, content_size);
	if (!new)
		return ;
	ft_lstadd(alst, new);
}
