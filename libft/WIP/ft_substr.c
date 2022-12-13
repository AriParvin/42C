/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:40:24 by aparvin           #+#    #+#             */
/*   Updated: 2022/12/12 11:14:41 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

unsigned int	ft_strlen(const char *str)
{
	unsigned int		len;
	const char			*s;

	s = str;
	len = 0;
	while (*s++ != '\0')
		len++;
	return (len);
}

char	*ft_substr(const char *str, unsigned int start, size_t len)
{
	char	*sub;
	const char	*s;

	sub = (char *)malloc(len+1);
	s = str + start;
	if (!s || !sub || start > ft_strlen(str)) 
		return (NULL);
	while (len--)
		*sub++ = *s++;
	*(sub + len) = '\0';
	return (sub);
}	

int main()
{
	const char *s = "FooBarFoo";
	int start = 3;
	int len = 2;
	printf("SRC: %s\tPOS: %d\tLEN: %d\n", s, start, len);
	printf("42:\t%s\n", ft_substr(s, start, len));
}

