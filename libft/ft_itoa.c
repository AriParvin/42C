/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:03:04 by aparvin           #+#    #+#             */
/*   Updated: 2022/12/18 03:05:56 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include "libft.h"

static void	ft_write_n(char *res, unsigned int n, int len, int sign)
{
	int		i;
	int		ii;

	i = 0;
	ii = 0;
	if (sign == 1)
	{
		res[0] = '-';
		i++;
	}
	while (i < len)
	{
		res[len - ii - 1] = (n % 10) + '0';
		n = n / 10;
		i++;
		ii++;
	}
	res[len] = '\0';
}

static int	ft_length_int(int n)
{
	int	len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
	{
		n = -n;
		len = 1;
	}
	while (n >= 1)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	int		sign;
	char	*res;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	sign = 0;
	len = ft_length_int(n);
	if (n < 0)
	{
		n *= -1;
		sign = 1;
	}
	res = malloc(sizeof(char) * len + 1);
	if (!res)
		return (0);
	if (n == 0)
	{
		res[1] = '\0';
		res[0] = '0';
	}
	if (n > 0)
		ft_write_n(res, n, len, sign);
	return (res);
}
