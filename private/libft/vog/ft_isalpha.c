/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 11:09:44 by aparvin           #+#    #+#             */
/*   Updated: 2022/11/30 15:28:05 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(unsigned char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1024);
	return (0);
}

/*
int main(void)
{
	unsigned char c1 = 'a';
	unsigned char c2 = 0;
	
	printf("SL:\t%d\n", isalpha(c1));
	printf("42:\t%d\n", ft_isalpha(c1));
	printf("SL:\t%d\n", isalpha(c2));
	printf("42:\t%d\n", ft_isalpha(c2));
}
*/
