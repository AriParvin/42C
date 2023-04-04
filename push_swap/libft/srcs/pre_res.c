/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pre_res.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 22:35:44 by aparvin           #+#    #+#             */
/*   Updated: 2023/04/04 22:35:58 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_res	*find_specif(t_res *tmp, const char *format, size_t i)
{
	if (format[i])
		tmp->c = format[i];
	tmp->i = format[i] == '\0' ? i : i + 1;
	return (tmp);
}

t_res	*pre_res(t_res *tmp, const char *format, size_t i, va_list list)
{
	while (ALL(format[i]))
	{
		i = find_dot(tmp, format, i);
		i = find_minus(tmp, format, i);
		i = find_plus(tmp, format, i);
		i = find_sharp(tmp, format, i);
		i = find_space(tmp, format, i);
		i = find_h(tmp, format, i);
		i = find_l(tmp, format, i);
		i = find_j(tmp, format, i);
		i = find_z(tmp, format, i);
		i = find_zero(tmp, format, i);
		i = find_precision(tmp, format, i, list);
		i = find_width(tmp, format, i, list);
		i = find_t(tmp, format, i);
	}
	return (find_specif(tmp, format, i));
}
