/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnlbu_valgrind.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:10:21 by aparvin           #+#    #+#             */
/*   Updated: 2023/02/07 11:09:40 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnlb_valgrind.h"

char	*ft_strjoin_bonus(char const *s1, char const *s2)
{
	char	*join;
	size_t	len_s1;
	size_t	len_s2;
	size_t	i;

	len_s1 = ft_strlen_bonus(s1);
	len_s2 = ft_strlen_bonus(s2);
	join = malloc(len_s1 + len_s2 + 1);
	if (!join)
		return (NULL);
	ft_strlcpy_bonus(join, s1, len_s1 + 1);
	i = 0;
	while (join[i] && i < (len_s1 + len_s2 + 1))
		i++;
	ft_strlcpy_bonus(&join[i], s2, (len_s1 + len_s2 + 1) - i);
	return (join);
}

size_t	ft_strlen_bonus(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

size_t	ft_strlcpy_bonus(char *dst, const char *src, size_t dstsize)
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
	return (ft_strlen_bonus(src));
}

char	*ft_substr_bonus(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	substr_len;
	int		s_len;

	s_len = ft_strlen_bonus((char *)s);
	if (start >= ft_strlen_bonus((char *)s))
	{
		substr = malloc (sizeof(char));
		if (!substr)
			return (NULL);
		*substr = '\0';
		return (substr);
	}
	if (len <= s_len - start)
		substr_len = len;
	else
		substr_len = s_len - start;
	substr = malloc (sizeof(char) * substr_len + 1);
	if (substr == NULL)
		return (0);
	ft_strlcpy_bonus(substr, &s[start], substr_len + 1);
	return (&substr[0]);
}

void	*ft_memmove_bonus(void *dest, const void *src, size_t n)
{
	char		*ptr_d;
	const char	*ptr_s;
	char		*ptr_db;
	const char	*ptr_sb;

	ptr_d = dest;
	ptr_s = src;
	if (ptr_d < ptr_s)
	{
		while (n--)
			*ptr_d++ = *ptr_s++;
		return (dest);
	}
	else if (ptr_d > ptr_s)
	{
		ptr_db = dest + (n - 1);
		ptr_sb = src + (n - 1);
		while (n--)
			*ptr_db-- = *ptr_sb--;
		return (dest);
	}
	return (dest);
}
