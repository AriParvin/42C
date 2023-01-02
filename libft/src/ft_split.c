/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 19:33:07 by aparvin           #+#    #+#             */
/*   Updated: 2022/12/17 21:56:30 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static char	**allocate_array(int size)
{
	char	**arr_ptr;

	arr_ptr = malloc(sizeof(char *) * (size + 1));
	if (!arr_ptr)
		return (0);
	return (arr_ptr);
}

static char	*allocate_string(int size)
{
	char	*str;

	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (0);
	return (str);
}

static int	get_string_length(const char *s, int start, char c)
{
	int	length;

	length = start;
	while (s[length] != c && s[length])
		length++;
	return (length);
}

static void	fill_array(char **arr_ptr, const char *s, char c)
{
	int		i;
	int		j;
	int		str_start;
	int		letters;
	char	*str_ptr;

	i = 0;
	j = 0;
	str_start = 0;
	str_ptr = (char *)&s;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		str_ptr = (char *)&s[i];
		str_start = i;
		i = get_string_length(s, str_start, c);
		letters = i - str_start;
		arr_ptr[j] = allocate_string(letters);
		if (!arr_ptr[j])
			return ;
		ft_strlcpy(arr_ptr[j], str_ptr, letters + 1);
		j++;
	}
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**arr_ptr;
	int		i;

	words = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			words++;
		while (s[i] != c && s[i])
			i++;
	}
	arr_ptr = allocate_array(words);
	if (!arr_ptr)
		return (0);
	fill_array(arr_ptr, s, c);
	arr_ptr[words] = 0;
	return (arr_ptr);
}
/*
int main()
{
	char const *s = "Foo%Bar";
	char c = '%';
	printf("%s", ft_split(s, c));
	return (0);
}
*/
