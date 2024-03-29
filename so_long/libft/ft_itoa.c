/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:49:35 by aparvin           #+#    #+#             */
/*   Updated: 2023/10/17 13:49:37 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		i = 1;
	if (n < 0)
		i = 1;
	while (n != 0)
	{
		i++;
		n = n / 10 ;
	}
	return (i);
}

// Allocates (with malloc(3)) and returns a string
// representing the integer received as an argument.
// Negative numbers must be handled.
char	*ft_itoa(int n)
{
	char	*ret;
	int		numlen;
	long	num;

	num = n;
	numlen = ft_numlen(n);
	ret = malloc(sizeof(char) * (numlen + 1));
	if (!ret)
		return (0);
	if (n == 0)
		ret[0] = '0';
	ret[numlen] = 0;
	if (n < 0)
	{
		ret[0] = '-';
		num = -num;
	}
	while (num != 0)
	{
		ret[--numlen] = num % 10 + '0';
		num = num / 10;
	}
	return (ret);
}
/*
int main(void)
{
    printf("is : %s", ft_itoa(-1234));
}
*/
