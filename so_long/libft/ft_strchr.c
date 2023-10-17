/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:53:01 by aparvin           #+#    #+#             */
/*   Updated: 2023/10/17 13:53:02 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != (char)c)
		s++;
	if (*s == (char)c)
		return ((char *)s);
	return (0);
}
/*
int main(void)
{
    char *test = "Berkcan";
    char c = 'c';
    //char *rest = ft_strchr(test, c);
    //printf("Rest of the string is: %s ",rest);
    printf("Result is: %s ",ft_strchr(test, c));

}
*/
