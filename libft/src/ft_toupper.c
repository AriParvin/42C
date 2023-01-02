/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:38:18 by aparvin           #+#    #+#             */
/*   Updated: 2022/12/01 10:56:21 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c -= 32);
	return (c);
}
/*
int main()
{
	int c = 'a';
	printf("SRC:\t%c\n", c);	
	printf("42:\t%c\n", ft_toupper(c));	
	printf("SL:\t%c\n", toupper(c));	
}
*/
