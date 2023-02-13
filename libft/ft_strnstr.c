/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 10:44:23 by aparvin           #+#    #+#             */
/*   Updated: 2022/12/16 20:00:09 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *lil, size_t l)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (lil[0] == '\0')
		return ((char *)big);
	while (big[i] && (i < l))
	{
		if (big[i] == lil[j])
		{
			while (((big[i + j] == lil[j]) || (lil[j] == '\0')) && (i + j) <= l)
			{
				if (!lil[j])
					return ((char *) &big[i]);
				j++;
			}
		}
		j = 0;
		i++;
	}
	return (NULL);
}
