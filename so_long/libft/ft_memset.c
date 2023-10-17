/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:50:28 by aparvin           #+#    #+#             */
/*   Updated: 2023/10/17 13:50:29 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = s;
	i = 0;
	while (n > i)
	{
		str [i] = c;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*str;

	str = strdup("helloooooo world");
	if (!ft_memset((void *)str, 'A', 5))
	{
		printf("An error occurred in ft_memset()\n");
	}
	else
	{
		printf("%s\n", str);
	}
}
*/
