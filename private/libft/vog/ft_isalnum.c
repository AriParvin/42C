/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 11:35:40 by aparvin           #+#    #+#             */
/*   Updated: 2022/11/30 16:07:10 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <ctype.h>

int	ft_isalnum(unsigned char c)
{
	printf("%c", c);
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (8);
	else
		return (0);
}
/*
int main(void)
{
	unsigned	char c1 = 48;
	unsigned	char c2 = 0;
	printf("SL:\t%d\n", isalnum(c1));
	printf("42:\t%d\n", ft_isalnum(c1));
	printf("SL:\t%d\n", isalnum(c2));
	printf("42:\t%d\n", ft_isalnum(c2));
}
*/
