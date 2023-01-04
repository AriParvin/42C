/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 19:33:07 by aparvin           #+#    #+#             */
/*   Updated: 2023/01/03 16:29:00 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static int	ft_count_words(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			i++;
		else
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*ft_putword(char *word, char const *s, int i, int word_len)
{
	int	j;

	j = 0;
	while (word_len > 0)
	{
		word[j] = s[i - word_len];
		j++;
		word_len--;
	}
	word[j] = '\0';
	return (word);
}

static char	**ft_split_words(char const *s, char c, char **s2, int num_words)
{
	int	i;
	int	word;
	int	word_len;

	i = 0;
	word = 0;
	word_len = 0;
	while (word < num_words)
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			word_len++;
		}
		s2[word] = (char *)malloc(sizeof(char) * (word_len + 1));
		if (!s2)
			return (0);
		ft_putword(s2[word], s, i, word_len);
		word_len = 0;
		word++;
	}
	s2[word] = 0;
	return (s2);
}

char	**ft_split(char const *s, char c)
{
	char			**s2;
	unsigned int	num_words;

	if (!s)
		return (0);
	num_words = ft_count_words(s, c);
	s2 = (char **)malloc(sizeof(char *) * (num_words + 1));
	if (!s2)
		return (0);
	ft_split_words(s, c, s2, num_words);
	return (s2);
}

/*
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
int main()
{
	char const *s = "Foo%Bar";
	char c = '%';
	printf("%s", ft_split(s, c));
	return (0);
}
*/
