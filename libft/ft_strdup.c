/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 09:59:10 by aparvin           #+#    #+#             */
/*   Updated: 2022/12/17 19:22:49 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	char	*d;

	len = ft_strlen(s) + 1;
	d = malloc(len);
	if (d == NULL)
		return (NULL);
	ft_strlcpy(d, s, len);
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
