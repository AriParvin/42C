/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:19:43 by aparvin           #+#    #+#             */
/*   Updated: 2022/11/30 16:15:58 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ctype.h>
#include <stdio.h>

int	ft_isascii(unsigned char c)
{
	if (c <= 127)
		return (1);
	return (0);
}
/*
int main(void)
{
	unsigned char c1 = 200;
	unsigned char c2 = 3;

	printf("SL:\t%d\n", isascii(c1));
	printf("42:\t%d\n", ft_isascii(c1));
	printf("SL:\t%d\n", isascii(c2));
	printf("42:\t%d\n", ft_isascii(c2));
}
*/
