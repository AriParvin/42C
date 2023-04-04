/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 21:28:04 by aparvin           #+#    #+#             */
/*   Updated: 2023/04/04 21:40:12 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	ii;
	char	*z1;
	char	*z2;

	i = 0;
	ii = 0;
	z1 = (char*)s1;
	z2 = (char*)s2;
	while (z1[i] != '\0')
		i++;
	if (n > ft_strlen(z2))
		n = ft_strlen(z2);
	while (n > 0)
	{
		z1[i] = z2[ii];
		i++;
		ii++;
		n--;
	}
	z1[i] = '\0';
	return (s1);
}
