/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 12:54:04 by aparvin           #+#    #+#             */
/*   Updated: 2022/12/16 13:24:46 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;
	int	ii;

	i = 0;
	ii = 0;
	if (s != NULL && f != NULL)
	{
		i = ft_strlen(s);
		while (ii < i)
		{
			(*f)(ii, s);
			s++;
			ii++;
		}
	}
}
