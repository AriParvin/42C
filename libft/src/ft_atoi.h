/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 11:48:06 by aparvin           #+#    #+#             */
/*   Updated: 2022/12/02 14:17:33 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_atoi(char *str)
{
	int	res;
	int	sign;
	int	i;

	res = 0;
	sign = 1;
	i = 0;
	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= 48 && str[i] <= 57))
			break ;
		res = res * 10 + str[i] - 48;
		i++;
	}
	return (sign * res);
}
/*
int main()
{
	char src[]= "-42XXX";
	printf("SRC:\t%s\n",src );
	printf("SL:\t%d\n", atoi(src ));
	printf("42:\t%d\n", ft_atoi(src ));
}	
*/
