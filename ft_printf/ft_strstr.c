/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 12:06:45 by aparvin           #+#    #+#             */
/*   Updated: 2022/12/16 12:10:59 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	ii;

	i = 0;
	ii = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[ii])
		{
			while ((str[i + ii] == to_find[ii]) || (to_find[ii] == '\0'))
			{
				if (!to_find[ii])
					return (&str[i]);
				ii++;
			}
		}
		ii = 0;
		i++;
	}
	return (0);
}
