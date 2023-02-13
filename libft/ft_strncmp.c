/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 18:49:19 by aparvin           #+#    #+#             */
/*   Updated: 2022/12/16 21:03:38 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && i < n - 1)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int	main(int ac, char **av)
{
	if (ac == 4){
	printf("IN:\t%s, %s, %d\n", av[1], av[2], atoi(av[3]));
	printf("42:\t%d\n", ft_strncmp(av[1], av[2],atoi(av[3])));
	printf("SL:\t%d\n", strncmp(av[1], av[2], atoi(av[3])));	
	}
	else
		return 0;
}
*/
