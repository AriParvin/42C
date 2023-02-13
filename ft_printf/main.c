/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:48:24 by aparvin           #+#    #+#             */
/*   Updated: 2023/02/13 18:20:56 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

	/* "Negative unsigned int"
	How to hanlde unsigned int, when the int is a negative number?
	printf doesn't throw an error but the behaviour is undefined

	ft_printf	("Hello, %d\t%i\t%u\t%u\t %s%c\n", 42, 42, 42, -42, "World", '!', ptr);
	printf		("Hello, %d\t%i\t%u\t%u\t %s%c\n", 42, 42, 42, -42, "World", '!', ptr);
	*/
int main(void)
{
	/*
	int *ptr;
	int i;
	i = 42;

	ptr = &i;
	ft_printf("Hello Pointer to %d\t%p\n", i, ptr);
	printf   ("Hello Pointer to %d\t%p\n", i, ptr);
	printf 		 ("Hello %c!\n", 'c');
	ft_printf  ("Hello %c!\n", 'c');
	printf  	 ("Hello %s!\n", "string");
	ft_printf  ("Hello %s!\n", "string");
	printf  	 ("Hello %d!\n", 42);
	ft_printf  ("Hello %d!\n", 42);
	printf  	 ("Hello %c!\n", '0');
	ft_printf  ("Hello %c!\n", '0');
	*/
	//printf  	 ("Hello %c %c %c!\n", 'a', 'b', 'c');
	//ft_printf  ("Hello %c %c %c!\n", 'a', 'b', 'c' );
	//printf  	 ("Hello%%% %c %c %c!\n", '0', 0, '1');
	//ft_printf  ("Hello%%% %c %c %c!\n", '0', 0, '1' );
	printf  	 ("Hello %c!\n", '1');
	ft_printf  ("Hello %c!\n", '1');
	printf  	 ("Hello %u!\n", -42);
	ft_printf  ("Hello %u!\n", -42);
	printf  	 ("Hello %u!\n", -1);
	ft_printf  ("Hello %u!\n", -1);
	printf  	 ("Hello %x!\n", -42);
	ft_printf  ("Hello %x!\n", -42);
	printf  	 ("Hello %X!\n", -4242);
	ft_printf  ("Hello %X!\n", -4242);
	printf  	 ("Hello %x!\n", 42);
	ft_printf  ("Hello %x!\n", 42);
	printf  	 ("Hello %X!\n", 4242);
	ft_printf  ("Hello %x!\n", 4242);
	printf  	 ("Hello %%!\n");
	ft_printf  ("Hello %%!\n");
 	printf		("NULL: %s!\n", (char *) NULL);
 	ft_printf	("NULL: %s!\n", NULL);
	//printf		(" %p %p\n", 0, 0);
	ft_printf		(" %p %p\n", 0, 0);
	ft_printf(0);


	return (0);
}


