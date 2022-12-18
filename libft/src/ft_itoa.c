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
#include "libft.h"

static char	*ft_revstr(char *src, int len)
{
	int		i;
	char	tmp;

	i = 0;
	while (i < len / 2)
	{
		tmp = src[i];
		src[i] = src[len - i - 1];
		src[len - i - 1] = tmp;
		i++;
	}
	return (src);
}

static int	ft_intlen(int n)
{
	int	len;

	len = 0;
	while (n >= 1)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int				len;
	int				i;
	char			*str;
	unsigned char	c;	
	int				sign;

	sign = 0;
	len = 0;
	if (n < 0)
	{
		n *= -1;
		sign = 1;
	}
	len = ft_intlen(n);
	str = malloc (sizeof(char) * len + 1 + sign);
	if (!str)
		return (NULL);
	i = 0;
	while (len > 0)
	{
		c = (n % 10) + '0';
		str[i] = c;
		i++;
		n = n / 10;
		len--;
	}
	if (sign == 1)
		str[i] = '-';
	str[++i] = '\0';
	ft_revstr(str, strlen(str));
	return (str);
}
/*
int main()
{
	printf("%s",ft_itoa(-12345));
}
*/
