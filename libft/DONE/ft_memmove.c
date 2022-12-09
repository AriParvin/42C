/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 14:16:32 by aparvin           #+#    #+#             */
/*   Updated: 2022/12/09 16:14:04 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;
	const char	*ls;
	char		*ld;

	d = dst;
	s = src;
	if (d < s)
	{
		while (len--)
			*d++ = *s++;
	}
	else
	{
		ls = s + (len - 1);
		ld = d + (len - 1);
		while (len--)
			*ld-- = *ls--;
	}
	return (dst);
}
/*
int main()
{
	char src[7] = "FooBar";
	char src2[7] = "FooBar";
	printf("SRC:\t%s\n", src);
	memmove(src, src, strlen(src)+1);
	ft_memmove(src2, src2, strlen(src2)+1);
	printf("SL:\t%s\n42:\t%s\n", src, src2);
}
*/
