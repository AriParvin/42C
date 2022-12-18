/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:39:14 by aparvin           #+#    #+#             */
/*   Updated: 2022/12/17 22:23:37 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static int	ft_matchset(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*out;
	size_t	i;
	size_t	start;
	size_t	end;

	start = 0;
	while (s1[start] && ft_matchset(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_matchset(s1[end - 1], set))
		end--;
	out = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (!out)
		return (NULL);
	i = 0;
	while (start < end)
		out[i++] = s1[start++];
	out[i] = 0;
	return (out);
}
