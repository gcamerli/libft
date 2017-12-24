#include "libft.h"

void	ft_striter(char *s, void (*f)(char *s))
{
	int	i;

	i = 0;
	if (s != NULL && f != NULL)
	{
		while (s[i] != '\0')
		{
			f(&s[i]);
			i++;
		}
	}
}
