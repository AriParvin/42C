/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:10:39 by aparvin           #+#    #+#             */
/*   Updated: 2022/12/16 15:44:34 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	void	*t;

	t = *&s;
	if (n != 0)
	{
		while (n > 0)
		{
			*(unsigned char *)s = (unsigned char)c;
			s++;
			n--;
		}
	}
	return (t);
}	
