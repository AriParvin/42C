/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 14:16:32 by aparvin           #+#    #+#             */
/*   Updated: 2022/12/09 11:42:27 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void *memmove(void *dst, const void *src, size_t n)
{
	char	*csrc;
	char	*cdst;
	char	*tmp;

	csrc = (char *)src;
	cdsr = (char *)dst; 

	while (*src)
		*tmp = csrc;

	
