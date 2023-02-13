/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:54:25 by aparvin           #+#    #+#             */
/*   Updated: 2023/02/13 15:54:56 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned long n, int *count, char c)
{
	if (c == 'X')
	{
		if (n >= 16)
		{
			ft_puthex(n / 16, count, c);
			ft_puthex(n % 16, count, c);
		}
		else if (n < 10)
			ft_putchar(n + 48, count);
		else
			ft_putchar(n + 55, count);
	}
	if (c == 'x')
	{
		if (n >= 16)
		{
			ft_puthex(n / 16, count, c);
			ft_puthex(n % 16, count, c);
		}
		else if (n < 10)
			ft_putchar(n + 48, count);
		else
			ft_putchar(n + 87, count);
	}
}
