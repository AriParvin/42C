/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slombard <slombard@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 20:04:15 by slombard          #+#    #+#             */
/*   Updated: 2022/12/10 22:47:08 by slombard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c)
{
	int i;
	int j;
	int k;
	int words;
	int letters;
	char **arr_ptr;
	int str_start;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if(s[i] != '\0')
			words++;
		while ((s[i] != c) && (s[i] != '\0'))
			i++;
	}

	arr_ptr = malloc (sizeof(char *) * (words + 1));
	if (arr_ptr == NULL)
		return (0);
	
	i = 0;
	j = 0;
	k = 0;
	letters = 0;
	str_start = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		str_start = i;
		while (s[i] != c && s[i] != '\0')
		{
			i++;
			letters++;
		}
		arr_ptr[j] = malloc (sizeof(char) * (letters + 1));
		if (arr_ptr[j] == NULL)
			return (0);
		while ( k < letters)
		{
			arr_ptr[j][k] = s[str_start + k];
			k++;
		}
		arr_ptr[j][k] = '\0';
		letters = 0;
		k = 0;
		j++;
	}
	arr_ptr[words] = NULL;
	return (arr_ptr);
}

