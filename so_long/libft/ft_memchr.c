/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:49:51 by aparvin           #+#    #+#             */
/*   Updated: 2023/10/17 13:49:52 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*cstr;
	unsigned char	cc;

	cstr = (unsigned char *)s;
	cc = (unsigned char)c;
	while (n > 0)
	{
		if (*cstr == cc)
			return (cstr);
		cstr++;
		n--;
	}
	return (0);
}
/*
int main(void)
{
	printf("my funct result is : %p", ft_memchr("ABCD", 'A', 5));
    printf("lib funct result is : %p", memchr("ABCD", 'A', 5));

}
*/
