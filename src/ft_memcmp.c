/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 09:38:31 by aparvin           #+#    #+#             */
/*   Updated: 2022/12/12 10:24:40 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *str1, const void *str2, size_t len)
{
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *) str1;
	s2 = (unsigned char *) str2;
	if (!len || len == 0)
		return (0);
	while (len--)
	{	
		if (*s1++ != *s2++)
			return (*--s1 - *--s2);
	}
	return (0);
}
/*
int main()
{
	char *s1 = "A";
	char *s2 = "Z";
	unsigned int n = 1;
	
	printf("TEST_1\n%s vs. %s\n", s1, s2);
	printf("42:\t%d\n", ft_memcmp(s1, s2, n));	
	printf("SL:\t%d\n\n", memcmp(s1, s2, n));
	printf("TEST_2\n%s vs. %s\n", s1, s1);
	printf("42:\t%d\n", ft_memcmp(s1, s1, n));	
	printf("SL:\t%d\n\n", memcmp(s1, s1, n));
	printf("TEST_3\n%s vs. %s\n", s2, s1);
	printf("42:\t%d\n", ft_memcmp(s2, s1, n));	
	printf("SL:\t%d\n\n", memcmp(s2, s1, n));
	printf("TEST_4\nRANGE:\t0\n");
	printf("42:\t%d\n", ft_memcmp(s1, s1, 0));	
	printf("SL:\t%d\n\n", memcmp(s1, s1, 0));
}
*/
