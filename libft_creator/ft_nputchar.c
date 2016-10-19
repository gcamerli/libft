#include <unistd.h>

int	ft_nputchar(char c, int n)
{
	int i;
	
	i = 0;
	while (i < n)
	{
		write(1, &c, 1);
		i++;
	}
	return (0);
}
