/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:13:34 by aparvin           #+#    #+#             */
/*   Updated: 2022/12/09 09:55:55 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void	*dst, void	*src, size_t len)
{	
	char	*csrc;
	char	*cdst;

	if (!dst)
		return (NULL);
	csrc = (char *)src;
	cdst = (char *)dst;
	while (len--)
		(*cdst++) = (*csrc++);
	return (dst);
}
/*
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
