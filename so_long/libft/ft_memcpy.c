/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:50:10 by aparvin           #+#    #+#             */
/*   Updated: 2023/10/17 13:50:11 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (0);
	while (n > i)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*src;
	char	*dest;

	src = strdup("hello world");
	dest = strdup("heyyy");
	if (!ft_memcpy((void *)dest, (const void *)src, 3))
	{
		printf("An error occurred in ft_memcpy()\n");
	}
	else
	{
		printf("source is : %s\n dest is : %s\n", src, dest);
	}
}
*/
