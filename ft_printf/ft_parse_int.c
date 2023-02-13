/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:50:23 by aparvin           #+#    #+#             */
/*   Updated: 2023/02/13 15:50:35 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_parse_int(int nbr, int *count)
{
	if (nbr == -2147483648)
	{
		ft_putstr("-2147483648", count);
		return ;
	}	
	ft_putnbr(nbr, count);
}
