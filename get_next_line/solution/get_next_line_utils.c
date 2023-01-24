/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 19:06:33 by aparvin           #+#    #+#             */
/*   Updated: 2023/01/24 19:06:45 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1_prefix;
	size_t	len_s2_suffix;
	char	*join;

	len_s1_prefix = ft_strlen(s1);
	len_s2_suffix = ft_strlen(s2);
	join = malloc(len_s1_prefix + len_s2_suffix + 1);
	if (!join)
		return (NULL);
	ft_strlcpy(join, s1, len_s1_prefix + 1);
	ft_strlcat(join, s2, len_s1_prefix + len_s2_suffix + 1);
	return (join);
}

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char		*ptr_dst;
	const char	*ptr_src;
	size_t		i;

	ptr_dst = dst;
	ptr_src = src;
	i = 0;
	if (dstsize > 0)
	{
		while (i < dstsize - 1 && *(ptr_src + i) != '\0')
		{
			*(ptr_dst + i) = *(ptr_src + i);
			i++;
		}
		*(ptr_dst + i) = '\0';
	}
	return (ft_strlen(src));
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (*dst && i < dstsize)
	{
		dst++;
		i++;
	}
	return (ft_strlcpy(dst, src, dstsize - i) + i);
}

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	strsize;

	strsize = ft_strlen(s) + 1;
	dup = malloc(strsize);
	if (dup)
	{
		ft_strlcpy(dup, s, strsize);
		return (dup);
	}
	return (NULL);
}

// char	*ft_substr(char const *s, size_t start, size_t len)
// {
// 	char	*new_s;
// 	size_t	new_len;
// 	char	*src;

// 	if (!s)
// 		return (NULL);
// 	if (ft_strlen(s) < start)
// 		return (ft_strdup(""));
// 	src = (char *)s + start;
// 	if (ft_strlen(src) < len)
// 		new_len = ft_strlen(src) + 1;
// 	else
// 		new_len = len + 1;
// 	new_s = (char *)malloc(new_len * sizeof(char));
// 	if (!new_s)
// 		return (NULL);
// 	ft_strlcpy(new_s, src, new_len);
// 	return (new_s);
// }


// char	*ft_substr(char const *s, size_t start, size_t len)
// {
// 	unsigned int	i;
// 	unsigned int	s_len;
// 	char			*substr;

// 	if (!s)
// 		return (NULL);
// 	s_len = ft_strlen(s);
// 	if (s_len < start)
// 	{
// 		if (!(substr = malloc(sizeof(char) * 1)))
// 			return (NULL);
// 		substr[0] = '\0';
// 		return (substr);
// 	}
// 	if (!(substr = malloc(sizeof(char) * (len + 1))))
// 		return (NULL);
// 	i = 0;
// 	while (i < len)
// 	{
// 		substr[i] = s[start + i];
// 		i++;
// 	}
// 	substr[i] = '\0';
// 	return (substr);
// }


void	*ft_calloc(size_t count, size_t size)
{
	// https://git.42l.fr/frdescam/libft/src/branch/master/ft_calloc.c
	char			*dst;
	unsigned int	total;
	unsigned int	i;

	total = count * size;
	if (!(dst = malloc(total)))
		return (NULL);
	i = 0;
	while (total--)
	{
		dst[i] = 0;
		i++;
	}
	return ((void *)dst);
}


char	*ft_substr(const char *s, size_t start, size_t len)
{
// https://git.hexanyn.fr/42/malloc/-/blob/master/libft/ft_substr.c
	char	*temp;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if ((size_t)start > len)
	{
		if ((temp = malloc(1)) == NULL)
			return (NULL);
		temp[0] = '\0';
		return (temp);
	}
	if ((temp = ft_calloc((len + 1), sizeof(char))) == NULL)
		return (NULL);
	while (start < (unsigned int)len)
	{
		temp[i] = s[start];
		i++;
		start++;
	}
	return (temp);
}


