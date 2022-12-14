/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WIP_strlcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 16:04:29 by aparvin           #+#    #+#             */
/*   Updated: 2022/12/14 16:42:53 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
/*
size_t	ft_strlen(char *s)
{
	char	*p;

	p = s;
	while (*p)
		p++;
	return (p - s);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	srclen;

	srclen = ft_strlen((char *)src);
	len = size - 1;
	while (len--)
		*dst++ = *src++;
	src = '\0';
	return (srclen);
}
*/
int main()
{
	char *dst = "";
	const char *src = "FooBar";
	size_t size = 3;

	printf("SRC:\t%s\n", src);
//	printf("42:\t%d\n", ft_strlcpy(dst, src, size));
	printf("SL:\t%d\n", strncpy(dst, src, size));
}
