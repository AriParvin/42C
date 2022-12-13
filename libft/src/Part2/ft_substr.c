/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:40:24 by aparvin           #+#    #+#             */
/*   Updated: 2022/12/13 14:12:04 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(const char *str, unsigned int start, size_t len)
{
	char				*sub;
	long unsigned int	i;

	sub = (char *)malloc(len - start + 2);
	i = 0;
	while (i < len - start)
	{
		sub[i] = *(str + start + i);
		i++;
	}
	sub[len - start + 1] = '\0';
	return (sub);
}	
/*
int main()
{
	const char *s = "FooBarFoo";
	int start = 3;
	int len = 6;
	printf("SRC: %s\tPOS: %d\tLEN: %d\n", s, start, len);
	printf("42:\t%s\n", ft_substr(s, start, len));
}
*/
