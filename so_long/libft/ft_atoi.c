/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:44:37 by aparvin           #+#    #+#             */
/*   Updated: 2023/10/17 13:44:50 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		result;
	int		neg;

	result = 0;
	neg = 1;
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == ' ')
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr++ == '-')
			neg *= -1;
	}
	while (ft_isdigit(*nptr))
		result = result * 10 + neg * (*nptr++ - '0');
	return (result);
}
/*
int main(void)
{
	printf("my atoi : %d", ft_atoi("-123"));
    printf("lib atoi : %d", atoi("-123"));

}
*/
