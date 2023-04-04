/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_c.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 22:37:37 by aparvin           #+#    #+#             */
/*   Updated: 2023/04/04 22:37:40 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	str_fill(t_res *tmp)
{
	if (ZERO && !MINUS)
		return ('0');
	return (' ');
}

char	*create_c(va_list list, t_res *tmp)
{
	char	*str;
	int		c;
	int		i;

	tmp->length = !(WIDTH) ? 1 : WIDTH;
	str = ft_strnew(tmp->length);
	ft_memset(str, str_fill(tmp), tmp->length);
	c = !(SPECIFIER(tmp->c)) ? tmp->c : va_arg(list, int);
	i = (WIDTH && !(MINUS)) ? WIDTH - 1 : 0;
	str[i] = (char)c;
	return (str);
}
