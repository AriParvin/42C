/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:55:13 by aparvin           #+#    #+#             */
/*   Updated: 2023/10/17 13:55:14 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = 0;
	while (*s)
	{
		s++;
		len++;
	}
	while (len != -1)
	{
		if (*s != (char)c)
		{
			s--;
			len--;
		}
		else
			return ((char *)s);
	}
	return (NULL);
}
/*
int main(void)
{
    char *test = "Berkcancox";
    char c = 'c';
    char *rest = ft_strrchr(test, c);
    printf("Rest of the string is: %s ",rest);
}
*/
