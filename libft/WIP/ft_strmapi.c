#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	if (!(str = ft_strdup(s)))
		return (NULL);
	i = 0;
	while (*s)
	{
		str[i] = (*f)(i, str[i]);
		i++;
	}
	return (str);
}

int main ()
{
	char const *str = "Foobar";

	ft_strmapi(str, 
}
