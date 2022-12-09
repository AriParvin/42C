/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:09:47 by aparvin           #+#    #+#             */
/*   Updated: 2022/12/05 10:15:45 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*match;
	int		i;

	i = 0;
	match = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			match = ((char *)&s[i]);
		i++;
	}
	if (match == NULL)
		return (NULL);
	return (match);
}
/*
int main(void)
{
	const char* s = "Hello World";
	int c = 'l';

	printf("source:\t%s\tmatch:\t%c\n", s, c);
	printf("stdlib:\t%s\n", strrchr(s,c));
	printf("42:\t%s\n", ft_strrchr(s, c));
}
*/
