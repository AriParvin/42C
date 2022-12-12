#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	const unsigned char		*s;

	s = str;
	while (n--)
	{
		if (*s == (unsigned char)c)
			return ((void *)s);
		s++;
	}
	return (NULL);
}
/*
int main()
{
	char *str = "FooBar";
	const char c = 'B';
	char *res1;
	char *res2;
	
	res1 = memchr(str, c, strlen(str));
	res2 = ft_memchr(str, c, strlen(str));

	printf("\nSRC:\t%s RNG: %ld TARGET: %c\n\n", str, strlen(str), c);
	printf("42:\t%c found @ position %ld\n", c, (res1 - str));
	printf("SL:\t%c found @ position %ld\n", c, (res2 - str));
}
*/
