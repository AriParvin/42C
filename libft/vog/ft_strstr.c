#include<stdio.h>
#include<string.h>
/*
   ARRAY VERSION

char    *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;
    i = 0;
    j = 0;
    if (to_find[0] == '\0')
        return (str);
    while (str[i])
    {
        if (str[i] == to_find[j])
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

	POINTER VERSION - WIP

char	*ft_strstr(char *str, char *find)
{
	if (!*find)
		return (str);
	while (*str++)
	{
		if (str == *find)
		{
			while(
	*/
int main(void)
{
    char needle[] = "co";
    char str[] = "Hello, welcodme to my code!";    
    printf ("SRC:\t%s\nX:\t%s\n42:\t%s\nSL:\t%s\n", str, needle, ft_strstr(str, needle), strstr(str, needle));
    return (0);
}
