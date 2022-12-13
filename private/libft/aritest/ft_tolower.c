/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:38:18 by aparvin           #+#    #+#             */
/*   Updated: 2022/12/01 10:48:10 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <ctype.h>

char	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c = c + 32);
	else
		return (c);
}
/*
int main()
{
	int c = 'A';	
	
	printf("SRC:\t%c\n", c);
	printf("42:\t%c\n", ft_tolower(c));
	printf("SL:\t%c\n", tolower(c));
}
*/
