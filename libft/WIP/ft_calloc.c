/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:54:32 by aparvin           #+#    #+#             */
/*   Updated: 2022/12/06 16:39:30 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	int	*ptr;

	 
}

int	main()
{
	size_t n = 21;
	size_t s = 2;
	printf("SL:\t%p\n",calloc(n, s));
	printf("42:\t%p\n",ft_calloc(n, s));
}
