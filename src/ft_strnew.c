#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*tmp;

	i = 0;
	tmp = (char *)malloc((size + 1) * sizeof(*tmp));
	if (tmp)
	{
		while (i < size + 1)
		{
			tmp[i] = '\0';
			i++;
		}
		return (tmp);
	}
	return (NULL);
}
