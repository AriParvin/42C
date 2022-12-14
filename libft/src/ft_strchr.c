/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:09:47 by aparvin           #+#    #+#             */
/*   Updated: 2022/12/01 10:32:35 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char	*s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}
/*
int main(void)
{
	const char* s = "Hello World";
	int c = 'W';

	printf("SRC:\t%s\n", s);
	printf("SL:\t%s\n", strchr(s,c));
	printf("42:\t%s\n", ft_strchr(s, c));
}
*/
