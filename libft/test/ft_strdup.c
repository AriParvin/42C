/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 09:59:10 by aparvin           #+#    #+#             */
/*   Updated: 2022/12/09 11:26:08 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dst, char *src)
{
	char	*tmp;

	tmp = dst;
	while (*src)
		*dst++ = *src++;
	*dst = '\0';
	return (tmp);
}

long int	ft_strlen(char *s)
{
	char	*p;

	p = s;
	while (*p)
		p++;
	return (p - s);
}

char	*ft_strdup(char *s)
{
	int		len;
	char	*d;

	len = ft_strlen(s) + 1;
	d = malloc (len);
	if (d == NULL)
		return (NULL);
	ft_strcpy(d, s);
	return (d);
	free(d);
}
/*
int main()
{
	char *src = "Foobar";
	char *dst1;
	char *dst2;

	dst1 = strdup(src);
	dst2 = ft_strdup(src);

	printf("SRC:\t%s\nSL:\t%s\n",src, dst1);
	printf("42:\t%s\n", dst2);
}	
*/
