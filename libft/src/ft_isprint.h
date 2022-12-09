/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:26:03 by aparvin           #+#    #+#             */
/*   Updated: 2022/11/30 16:25:13 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ctype.h>
#include <stdio.h>

int	ft_isprint(unsigned char c)
{
	if (c <= 32 || c == 127)
		return (0);
	return (16384);
}
/*
int main(void)
{
	unsigned char c1 = 0;
	unsigned char c2 = 48;

	printf("SL:\t%d\n", isprint(c1));
	printf("42:\t%d\n", ft_isprint(c1));
	printf("SL:\t%d\n", isprint(c2));
	printf("42:\t%d\n", ft_isprint(c2));
}
*/
