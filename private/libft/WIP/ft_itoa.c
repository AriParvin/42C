/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:03:04 by aparvin           #+#    #+#             */
/*   Updated: 2022/12/13 15:33:57 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
/*
size_t	ft_strlen(char *s)
{
	char	*p;

	p = s;
	while (*p)
		p++;
	return (p - s);
}

void	ft_swap(int *a, int *b)
{
	int *tmp;

	*tmp = *a;
	*a = *b;
	b = tmp;
}

void	ft_strrev(char *str)
{
	int	start;
	int	end;
	int len;

	len = (int)ft_strlen(str);
	start = 0;
	end = len - 1;
	while (start < end)
	{
		ft_swap(*(str+start), *(str+end));
		start++;
		end--;
	}
}
*/
char	*ft_itoa(int n)
{
	char	*res;
	int		rem;
	
	if (n < 0)
		n = -n;
	while (n != 0)
	{
		rem = n % 10;
		*res++ = (rem > 9)? (rem - 10) + 'a' : rem + '0';
		n = n / 10;
	}
	if (n < 0)
		*res++ = '-';
	*res = '\0';
	return (res);
}

int	main()
{
	int n = 42;
	printf("SRC:\t%d\nOUT:\t%s\n", n, ft_itoa(n));
}
