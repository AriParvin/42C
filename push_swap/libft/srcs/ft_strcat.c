/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 15:34:00 by aparvin           #+#    #+#             */
/*   Updated: 2023/04/04 15:39:39 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int				i;
	int				ii;
	int				iii;
	unsigned char	*z1;
	unsigned char	*z2;
	
	i = 0;
	ii = 0;
	iii = 0;
	z1 = (unsigned char*)s1;
	z2 = (unsigned char*)s2;
	while (z1[i] != '\0')
		i++;
	while (z2[ii] != '\0')
		ii++;
	iii = i + ii;
	ii = 0;
	while (i < iii)
	{
		z1[i] = z2[ii];
		ii++;
		i++;
	}
	z1[i] = '\0';
	return (s1);
}
