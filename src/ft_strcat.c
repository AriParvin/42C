/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:30:37 by aparvin           #+#    #+#             */
/*   Updated: 2022/12/12 13:32:54 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *str, const char *app)
{
	char	*save;

	save = s;
	while (*str++)
		save += *str;
	while (*app++)
		save += *app;
	return (save);
}
