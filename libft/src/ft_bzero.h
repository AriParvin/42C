/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:40:48 by aparvin           #+#    #+#             */
/*   Updated: 2022/12/02 15:56:27 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	char	*c;

	while (n-- != 0)
	{
		c = s;
		*c = '\0';
	}
}
/*
int	main(void)
{
	char str1[13] = "Hello World";
	char str2[13] = "Hello World";
	size_t n = 10;
	printf("SRC:\t%s\n", str1);
	ft_bzero(str1, n);
 	bzero(str2, n);
 	printf("42:\t%s\n", str1);
	printf("SL:\t%s\n", str2);
}
*/
