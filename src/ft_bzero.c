#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*b;

	i = 0;
	b = s;
	while (i < n)
	{
		b[i] = '\0';
		i++;
	}
}
