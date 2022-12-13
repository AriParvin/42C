/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr_to_strnstr.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:01:47 by aparvin           #+#    #+#             */
/*   Updated: 2022/12/09 14:38:08 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

char    *ft_strnstr(const char *str, const char *sub, size_t len)
{
    int i;
    int j;
    i = 0;
    j = 0;
    if (!sub)
        return (str);
    while (*str++)
    {
        if (str == to_find[j])
        {
            while ((str[i + j] == to_find[j]) || (to_find[j] == '\0'))
            {
                if (!to_find[j])
                {
                    return (&str[i]);
                }
                j++;
            }
        }
        j = 0;
        i++;
    }
    return (0);
}
int main(void)
{
    char *needle = "co";
    char *str = "Hello, welcodme to my code!";
    printf ("%s\n", ft_strstr(str, needle));
    printf("%s\n", strstr(str, needle));
    return (0);
}
