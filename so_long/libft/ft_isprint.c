/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:49:07 by aparvin           #+#    #+#             */
/*   Updated: 2023/10/17 13:49:13 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("ft_isprint result is : %d \n", ft_isprint(50));
	printf("isprint result is : %d \n", isprint(50));
	printf("ft_isprint result is : %d \n", ft_isprint(10));
    printf("isprint result is : %d \n", isprint(10));
}
*/
