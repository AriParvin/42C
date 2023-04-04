/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_max.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 22:41:56 by aparvin           #+#    #+#             */
/*   Updated: 2023/04/04 22:42:02 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_max(ssize_t nbr)
{
	char	*result;
	ssize_t	tmp;
	int		len;
	int		k;

	if (nbr == 0)
		return (ft_strdup("0"));
	tmp = nbr;
	len = nbr < 0 ? 1 : 0;
	k = nbr < 0 ? -1 : 1;
	while (tmp != 0)
	{
		tmp /= 10;
		len++;
	}
	result = ft_strnew(len);
	if (k < 0)
		result[0] = '-';
	while (len > 0 && result[len - 1] != '-')
	{
		result[len - 1] = nbr % 10 * k + '0';
		nbr /= 10;
		len--;
	}
	return (result);
}

char	*ft_itoa_u_max(size_t nbr)
{
	char	*result;
	size_t	tmp;
	int		len;

	if (nbr == 0)
		return (ft_strdup("0"));
	tmp = nbr;
	len = 0;
	while (tmp != 0)
	{
		tmp /= 10;
		len++;
	}
	result = ft_strnew(len);
	while (len > 0 && result[len - 1] != '-')
	{
		result[len - 1] = nbr % 10 + '0';
		nbr /= 10;
		len--;
	}
	return (result);
}
