/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:53:33 by aparvin           #+#    #+#             */
/*   Updated: 2023/02/13 17:46:28 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list			args;
	int				count;

	va_start(args, format);
	count = 0;
	if (ft_printf(0))
		return (NULL);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			ft_parse_specifier(&args, &count, *format);
			format++;
		}
		else
		{
			ft_putchar(*format, &count);
			format++;
		}
	}
	va_end(args);
	return (count);
}

void	ft_parse_specifier(va_list *args, int *count, char c)
{
	if (c == 'c')
		ft_parse_char(va_arg(*args, int), count);
	else if (c == 's')
		ft_parse_str(va_arg(*args, char *), count);
	else if (c == 'p')
		ft_parse_ptr(va_arg(*args, void *), count);
	else if (c == 'd' || c == 'i')
		ft_parse_int(va_arg(*args, int), count);
	else if (c == 'u')
		ft_parse_uint(va_arg(*args, unsigned int), count);
	else if (c == 'x')
		ft_parse_hex(va_arg(*args, int), count, c);
	else if (c == 'X')
		ft_parse_hex(va_arg(*args, int), count, c);
	else
		ft_putchar('%', count);
}
