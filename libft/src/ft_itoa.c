/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:03:04 by aparvin           #+#    #+#             */
/*   Updated: 2022/12/16 12:55:20 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

char	*ft_itoa(int n)
{
	char	*num;

	num = (char *)malloc(n + 1);
	if (n >= 0 && num)
	{
		*--num = '0' + (n % 10);
		n /= 10;
		while (n != 0)
		{
			*--num = '0' + (n % 10);
			n /= 10;
		}
	}
	else if (num)
	{
		*--num = '0' - (n % 10);
		n /= 10;
		while (n != 0)
		{
			*--num = '0' - (n % 10);
			n /= 10;
		}
		*--num = '-';
	}
	return (ft_strdup(num));
}
