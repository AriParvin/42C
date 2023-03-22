/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:13:34 by aparvin           #+#    #+#             */
/*   Updated: 2023/01/03 12:19:50 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

/*
void	*ft_memcpy(void	*dst, void	*src, size_t len)
{	
	char	*csrc;
	char	*cdst;

	if (!dst || dst == NULL)
		return (NULL);
	csrc = (char *)src;
	cdst = (char *)dst;
	while (len--)
		(*cdst++) = (*csrc++);
	return (dst);
}
int	main ()
{
	char src[] = "FooBar";
	char dst[20];

	memcpy(dst, src, strlen(src) + 1);
	ft_memcpy(dst, src, strlen(src) + 1);

	if(strcmp(dst,src) == 0)
		printf("OK\n");
	else
		printf("KO\n");	
}
*/
