/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:53:12 by aparvin           #+#    #+#             */
/*   Updated: 2023/10/17 13:53:13 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s1_mal;
	size_t	len;

	len = ft_strlen(s1);
	s1_mal = malloc(sizeof(char) * len + 1);
	if (!s1_mal)
		return (0);
	ft_strlcpy(s1_mal, s1, len + 1);
	return (s1_mal);
}
