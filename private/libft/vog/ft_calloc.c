/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:54:32 by aparvin           #+#    #+#             */
/*   Updated: 2022/12/09 15:23:13 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	bytes;
	char	*p;

	bytes = nmemb * size;
	ptr = malloc(bytes);
	p = (char *)ptr;
	if (ptr == NULL)
		return (NULL);
	while (bytes--)
		*p++ = 0;
	return (ptr);
}
/*
int	main()
{
	int *ptr = (int *)calloc(5, sizeof(int));
	int *ptr2 = (int *)ft_calloc(5, sizeof(int));

	if(ptr == NULL)
		return(printf("MEMORY COULD NOT BE ALLOCATED\n")  
	else
	{
		while (*ptr2++)
		{
			printf("\t%d\n", ptr2[i]);
			free(ptr2);
		}
	}
	return (0);
}
TEST NOT FINISHED
*/
