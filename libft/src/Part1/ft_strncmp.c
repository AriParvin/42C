/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 18:49:19 by aparvin           #+#    #+#             */
/*   Updated: 2022/12/05 10:39:44 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int		i;
	i = 0;
	while (s1[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	main(void)
{
	char *s1 = "Hello World";
	char *s2 = "World Hello";
	unsigned int n = 6;
	
	printf("strcmp(%s, %s, %d)\n", s1, s2, n);
	printf("42:\t%d\n", ft_strncmp(s1, s2, n));	
	printf("SL:\t%d\n", strncmp(s1, s2, n));	
	
}
			
