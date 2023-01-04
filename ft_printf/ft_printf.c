#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "libft.h"

void	ft_printf(const char *format, ...);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *str);

void ft_printf(const char *format, ...)
{
	va_list	args;
	const char		*fmt;
 	size_t	len;
	size_t	i;

	va_start(args, format);
	fmt = format;
	len = ft_strlen(fmt);
	printf("len:\t%zu\n", len);
	printf("fmt:\t%s\n", fmt);
	i = 0;
	while (i < len)
	{
		printf("%c\n", fmt[i]);
		i++;
	}
	i = 0;
	while (fmt[i])
	{
		if (fmt[i] == '%')
		{
				i++;
				if (fmt[i] == 'c')
				{
					ft_putchar_fd(va_arg(args, int), 1);
					i++;
				}

				if (fmt[i] == 's')
				{
					ft_putstr_fd(va_arg(args, char *), 1);
					i++;
				}
		}
		else
		{
			ft_putchar_fd(fmt[i], 1);
			i++;
		}
	}
	va_end(args);
}

void ft_putstr_fd(char *s, int fd)
{
	int		i;

	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

size_t	ft_strlen(const char *str)
{
	size_t	s;

	s = 0;
	while (str[s] != '\0')
		s++;
	return (s);
}
int main(void)
{
	ft_printf("Hello, %s%c\n", "World", '!');
	printf("Hello, %s%c\n", "World", '!');
	return (0);
}
