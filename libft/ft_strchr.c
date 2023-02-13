/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:09:47 by aparvin           #+#    #+#             */
/*   Updated: 2023/01/03 11:39:51 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char	*s, int c)
{
	while ((char)c != *s)
	{
		if (!*s)
			return (0);
		s++;
	}
	return ((char *)s);
}
/*
int main(void)
{
	const char* s = "teste";
	int c = 't' + 256;

	printf("SRC:\t%s\n", s);
	printf("SL:\t%p\n", strchr(s,c));
	printf("42:\t%p\n", ft_strchr(s, c));
}
*/
