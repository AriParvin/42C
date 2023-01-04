/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:58:42 by aparvin           #+#    #+#             */
/*   Updated: 2022/12/16 23:36:55 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*res;
	char	*ptr;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	res = malloc(len1 + len2 + 1);
	ptr = res;
	while (len1--)
		*ptr++ = *s1++;
	while (len2--)
		*ptr++ = *s2++;
	*ptr = '\0';
	return (res);
}
/*
int main()
{
	char const *s1 = "Foo";
	char const *s2 = "Bar";
	
	printf("%s + %s\n\n%s\n", s1, s2, ft_strjoin(s1, s2));
}
*/
