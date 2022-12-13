/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 13:04:41 by aparvin           #+#    #+#             */
/*   Updated: 2022/12/13 13:18:07 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	if (s && fd > 0)
	{
		while (*s)
		{
			write(fd, s, 1);
			s++;
		}
	}
}
/*
int main()
{
	char *s = "FooBar";
	int fd = 1;
	ft_putstr_fd(s, fd);
}
*/
