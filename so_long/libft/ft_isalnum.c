/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:48:20 by aparvin           #+#    #+#             */
/*   Updated: 2023/10/17 13:48:21 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

/*
#include <ctype.h>
#include <stdio.h>
int main(void)
{
printf("ft_isalnum result is : %d \n", ft_isalnum(75));
printf("isalnum result is : %d \n", isalnum(75));
printf("ft_isalnum result is : %d \n", ft_isalnum(50));
printf("isalnum result is : %d \n", isalnum(50));
printf("ft_isalnum result is : %d \n", ft_isalnum(1));
printf("isalnum result is : %d \n", isalnum(1));
}
*/
