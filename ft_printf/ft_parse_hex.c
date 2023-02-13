/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:49:48 by aparvin           #+#    #+#             */
/*   Updated: 2023/02/13 15:50:03 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_parse_hex(unsigned int hex, int *count, char c)
{
	if (c == 'x')
		ft_puthex(hex, count, c);
	if (c == 'X')
		ft_puthex(hex, count, c);
}
