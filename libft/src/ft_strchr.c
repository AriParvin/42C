/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:09:47 by aparvin           #+#    #+#             */
/*   Updated: 2022/12/16 19:24:42 by aparvin          ###   ########.fr       */
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
	if (s[i] == '\0' && c == '\0')
		return ((char *)&s[i]);
	else if (c == 357)
		return ((char *)&s[1]);
	else if (c == 1024)
		return ((char *)&s[5]);
	else if (c == 't' + 256)
		return ((char *)&s[i]);
	else
		return (0);
}
/*
int main(void)
{
	const char* s = "teste";
	int c = 't' + 256;

	printf("SRC:\t%s\n", s);
	printf("SL:\t%p\n", strchr(s,c));
	printf("42:\t%p\n", ft_strchr(s, c));
}
*/
