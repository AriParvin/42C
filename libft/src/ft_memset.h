/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:10:39 by aparvin           #+#    #+#             */
/*   Updated: 2022/11/30 17:31:09 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	void	*t;

	if (n != 0)
	{
		t = *&s;
		while (n != 0)
		{
			*(int *)s = c;
			s++;
			n--;
		}
	}
	return (t);
}
/*
int main(void)
{
	char str[13] = "Hello World!";
	printf("SL:\t%p\n", memset(str, '?', 5));
	printf("42:\t%p\n", ft_memset(str, '?', 5));
}
*/
