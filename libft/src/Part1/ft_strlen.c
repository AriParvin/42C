/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:47:35 by aparvin           #+#    #+#             */
/*   Updated: 2022/12/09 10:15:17 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

size_t	ft_strlen(char *s)
{
	char	*p;

	p = s;
	while (*p)
		p++;
	return (p - s);
}
/*
int main()
{
	char* str = "Hello World";
	printf("SL:\t%ld\n", strlen(str));
	printf("42:\t%ld\n", ft_strlen(str));
}
*/
