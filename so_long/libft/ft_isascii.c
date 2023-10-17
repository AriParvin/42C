/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:48:44 by aparvin           #+#    #+#             */
/*   Updated: 2023/10/17 13:48:45 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("ft_isascii result is : %d \n", ft_isascii(50));
	printf("isascii result is : %d \n", isascii(50));
	printf("ft_isascii result is : %d \n", ft_isascii(128));
    printf("isascii result is : %d \n", isascii(128));
}*/
