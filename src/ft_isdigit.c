/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 11:24:26 by aparvin           #+#    #+#             */
/*   Updated: 2022/11/30 15:40:07 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(unsigned char c)
{
	if (c >= 48 && c <= 57)
		return (2048);
	return (0);
}
/*
int main(void)
{
	unsigned char c1 = 'a';
	unsigned char c2 = 50;

	printf("SL:\t%d\n", isdigit(c1));
	printf("42:\t%d\n", ft_isdigit(c1));

	printf("SL:\t%d\n", isdigit(c2));
	printf("42:\t%d\n", ft_isdigit(c2));
}
*/
