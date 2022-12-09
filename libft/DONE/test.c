/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 12:40:07 by aparvin           #+#    #+#             */
/*   Updated: 2022/12/02 17:17:08 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

#include "ft_isalpha.c"
#include "ft_isdigit.c"
#include "ft_isalnum.c"
#include "ft_isascii.c"
#include "ft_isprint.c"
#include "ft_strlen.c"
#include "ft_memset.c"
#include "ft_bzero.c"
/*
#include "ft_memcpy.c"
#include "ft_memmove.c"
#include "ft_strlcpy.c"
#include "ft_strlcat.c"
#include "ft_toupper.c"
#include "ft_tolower.c"
#include "ft_strchr.c"
#include "ft_strrchr.c"
#include "ft_strncmp.c"
#include "ft_memchr.c"
#include "ft_memcmp.c"
#include "ft_strnstr.c"
#include "ft_atoi.c"
#include "ft_calloc.c"
#include "ft_strdup.c"
*/

int main(void)
{	
	int t1 = 'a';
	char t2[7] = "FooBar";
	size_t n = 1;

	printf("@\t@@@@@\t@@@@\t\t@@@@@\t@@@@@\n");
	printf("@\t  @  \t@   @\t\t@\t  @  \n");
	printf("@\t  @  \t@@@@ \t\t@@@@\t  @  \n");
	printf("@\t  @  \t@   @\t\t@  \t  @  \n");
	printf("@@@@@\t@@@@@\t@@@@@\t@@@@@\t@  \t  @  \n\n");

	printf("isalpha(%c)\nSL:\t%d\n",t1, isalpha(t1));
	printf("42:\t%d\n\n", ft_isalpha(t1));

	printf("isdigit(%c)\nSL:\t%d\n",t1, isdigit(t1));
	printf("42:\t%d\n\n", ft_isdigit(t1));

	printf("isalnum(%c)\nSL:\t%d\n",t1, isalnum(t1));
	printf("42:\t%d\n\n", ft_isalnum(t1));
	
	printf("isascii(%c)\nSL:\t%d\n",t1, isascii(t1));
	printf("42:\t%d\n\n", ft_isascii(t1));

	printf("isprint(%c)\nSL:\t%d\n",t1, isprint(t1));
	printf("42:\t%d\n\n", ft_isprint(t1));

	printf("strlen(%s)\nSL:\t%ld\n",t2, strlen(t2));
	printf("42:\t%ld\n\n", ft_strlen(t2));

	printf("memset(%s)\nSL:\t%p\n","FooBar",memset(t2,t1,1));
	printf("42:\t%p\n\n", memset(t2,t1,1));

	char bz1[] = "FooBar";
	char bz2[] = "FooBar";
	printf("bzero(%s, %ld)\n", bz1, n);
	bzero(bz1, n);
	ft_bzero(bz2, n);
	printf("SL:\t%s\n",bz1);
	printf("42:\t%s\n",bz2);

}
