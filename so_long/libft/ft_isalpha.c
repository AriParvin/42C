/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:48:32 by aparvin           #+#    #+#             */
/*   Updated: 2023/10/17 13:48:33 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>
int main(void)
{
printf("ft_isalpha result is : %d \n", ft_isalpha(75));
printf("isalpha result is : %d \n", isalpha(75));
}
*/
