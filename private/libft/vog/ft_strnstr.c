/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 10:44:23 by aparvin           #+#    #+#             */
/*   Updated: 2022/12/09 14:40:16 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *str, const char *sub, size_t len)
{
	char	*cstr;
	char	*csub;

	cstr = (char *)str;
	csub = (char *)sub;
	if (!*sub)
		return (cstr);
	while (len--)
	{
		if (*str++ == *sub++)
			return (csub);
	}
	return (NULL);
}
/*
int main(void)
{
	const char *str = "Hello World";
	const char *sub = "World";
	size_t		len = 7;

	printf("strnstr(%s, %s, %ld)\n", str, sub, len);
	printf("42:\t%s\n", ft_strnstr(str, sub, len));
}
*/
