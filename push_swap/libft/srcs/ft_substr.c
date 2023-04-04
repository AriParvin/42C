/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:40:24 by aparvin           #+#    #+#             */
/*   Updated: 2023/01/03 15:28:13 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

/*
static size_t	ft_len(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	ii;

	while (s[i] && i < start)
		i++;
	while (s[i] && ii < len)
	{
		i++;
		ii++;
	}
	return (ii);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	size;
	char	*dest;

	if (!s)
		return (NULL);
	size = ft_len(s, start, len);
	dest = malloc(sizeof(char) * (size + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (i < size && s[start + i])
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
*/
char	*ft_substr(const char *str, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;

	if (!str || start >= ft_strlen(str))
	{
		substr = malloc(sizeof(char));
		if (!substr)
			return (0);
		*substr = '\0';
		return (substr);
	}
	if (start + len > ft_strlen(str))
		len = ft_strlen(str) - start;
	substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (0);
	i = 0;
	while (i < len && str[start + i])
	{
		substr[i] = str[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
