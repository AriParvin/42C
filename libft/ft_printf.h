/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:53:48 by aparvin           #+#    #+#             */
/*   Updated: 2023/02/13 15:53:56 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <stdint.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/errno.h>

int					ft_printf(const char *format, ...);
void				ft_parse_specifier(va_list *args, int *count, char c);

void				ft_parse_char(char c, int *count);
void				ft_parse_str(char *str, int *count);
void				ft_parse_int(int nbr, int *count);
void				ft_parse_uint(unsigned int nbr, int *count);
void				ft_parse_ptr(void *ptr, int *count);
void				ft_parse_hex(unsigned int hex, int *count, char c);

void				ft_putchar(char c, int *count);
void				ft_putstr(char *s, int *count);
void				ft_putnbr(int n, int *count);
void				ft_putunbr(unsigned int n, int *count);
void				ft_puthex(unsigned long n, int *count, char c);

#endif
