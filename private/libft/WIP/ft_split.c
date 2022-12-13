/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:56:48 by aparvin           #+#    #+#             */
/*   Updated: 2022/12/13 16:27:54 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	char	*p;

	p =(char *)s;
	while (*p)
		p++;
	return (p - s);
}

char	**ft_split(char const *s, char c)
{
	char	*res1;
	char	*str;
	//char	**res2;
	str = (char *)s;	
	if (str)
		*res1 = (char *)malloc(ft_strlen(s));
	while (*str++ !=	c)
		str = res1;	
	return (res1);
}

int main()
{
	char const *str = "FooBar";
	char c = 'B';
	printf("SRC:\t%s\nRES1:\t%s\n", str, ft_split(str, c));
}
