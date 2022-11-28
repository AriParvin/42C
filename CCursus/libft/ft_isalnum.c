/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 11:35:40 by aparvin           #+#    #+#             */
/*   Updated: 2022/11/28 12:14:38 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(char c)
{
	if (c >= 48 || c <= 57 || c >= 65 || c <= 90 || c >= 97 || c <= 122)
		return (1);
	else
	return (0);
}	
