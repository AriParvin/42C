/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 12:48:55 by aparvin           #+#    #+#             */
/*   Updated: 2022/12/13 13:03:06 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	if (c && fd >= 0)
		write(fd, &c, 1);
}
/*
int main()
{
	char c = 'c';
	int fd = 2;
	ft_putchar_fd(c, fd);
}
*/
