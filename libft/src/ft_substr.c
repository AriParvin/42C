/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:40:24 by aparvin           #+#    #+#             */
/*   Updated: 2022/12/16 23:35:26 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(const char *str, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	s_len;
	char			*substr;

	substr = malloc(sizeof(char) * 1);
	if (!str)
		return (NULL);
	s_len = ft_strlen(str);
	if (s_len < start)
	{
		if (!(substr))
			return (NULL);
		substr[0] = '\0';
		return (substr);
	}
	if (!(substr))
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = str[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
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
