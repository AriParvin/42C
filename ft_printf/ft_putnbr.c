/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:55:13 by aparvin           #+#    #+#             */
/*   Updated: 2023/02/13 15:55:29 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *count)
{
	if (n < 0)
	{
		ft_putchar('-', count);
		n = n * -1;
	}
	if (n >= 10)
		ft_putnbr(n / 10, count);
	ft_putchar((n % 10) + '0', count);
}
