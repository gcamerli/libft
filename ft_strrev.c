void	ft_putchar(char c);

char	ft_strrev(char *str)
{
	int i;

	i = 0;
	while (str[i] >= 32 && str[i] <= 122 && str[i] != '\0')
		i++;
	while (i >= 0)
	{	
		ft_putchar(str[i]);
		i--;
	}
}
