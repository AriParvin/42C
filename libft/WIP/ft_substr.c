/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:40:24 by aparvin           #+#    #+#             */
/*   Updated: 2022/12/06 19:10:44 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(const char *str)
{
	unsigned int		len;
	const char			*s;

	s = str;
	len = 0;
	while (*s++ != '\0')
		len++;
	return (len);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*p;
	int		i;

	i = 0;
	p = malloc (len+1);
	if (p == NULL)
	{
		return (p);
	}
	else if (start > ft_strlen(s) || len > ft_strlen(s))
		return (s = '\0');
	while (i < len)
	{
		*(p+i) = *(s+start-1);
		s++;
		i++;
	}
	*(p+i) = '\0';
	return (p);
}	

int main()
{
	char s[10] = "FooBarFoo";
	int start = 14;
	int len = 3;
	printf("SRC: %s\tPOS: %d\tLEN: %d\n", s, start, len);
	printf("42:\t%s\n", ft_substr(s, start, len));
}

