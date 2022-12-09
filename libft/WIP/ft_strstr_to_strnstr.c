/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:01:47 by aparvin           #+#    #+#             */
/*   Updated: 2022/12/05 17:36:28 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*p;

	while (*str++ != '\0') 
	{
		if (*str == to_find[0])
		{
			p = str;

			while ((*str++ == *to_find++) && (*to_find++ != '\0'))
			{	
/*
				if (str[i] != to_find[j])
					break;
*/	
				if (*to_find == '\0')
					return (p);
			}
		str = p++;
		}		
	}
	return (str);
}

int	main(void)
{
	printf ("42:\t%s\n", ft_strstr("FooBarFoo", "Bar"));
	printf ("SL:\t%s\n", strstr("FooBarFoo", "Bar"));
	return (0);
}
