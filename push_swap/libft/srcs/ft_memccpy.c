/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 15:21:01 by aparvin           #+#    #+#             */
/*   Updated: 2023/04/04 15:25:21 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;
	unsigned char	ch;

	i = 0;
	s1 = (unsigned char*)dst;
	s2 = (unsigned char*)src;
	ch = (unsigned char)c;
	while (i < n)
	{
		s1[i] = s2[i];
		dst++;
		if (s2[i] == ch)
			return (dst);
		i++;
	}
	return (0);
}
