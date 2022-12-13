void	ft_swap(int *a, int *b)
{
	int tmp;

	temp = *a;
	*a = *b;
	b = temp;
}

void	ft_strrev(char *str)
{
	int	start;
	int	end;

	start = 0;
	end = len - 1;
	while (start < end)
	{
		swap(*(str+start), *(str+end));
		start++;
		end--;
	}
}

char	*ft_itoa(int n)
{
	int		sign;
	char	*res;
	
	if (n == 0)
		return (res = '0')
	if (n < 0)
		n = -n;
	while (num != 0)
	{

