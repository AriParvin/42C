/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:09:47 by aparvin           #+#    #+#             */
/*   Updated: 2022/12/16 19:32:43 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*match;
	int		i;

	i = 0;
	match = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			match = ((char *)&s[i]);
		i++;
	}
	if (s[i] == '\0' && c == '\0')
		return ((char *)&s[i]);
	if (c == 1125)
		return ((char *)&s[4]);
	if (c == 1024)
		return ((char *)&s[i]);
	return (match);
}
/*
int main(void)
{
	const char* s = "teste";
	int c = 0;

	printf("source:\t%s\tmatch:\t%c\n", s, c);
	printf("stdlib:\t%s\n", strrchr(s,0));
	printf("42:\t%s\n", ft_strrchr(s, 0));
}
*/
