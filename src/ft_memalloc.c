#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*tmp;

	tmp = (char *)malloc(size * sizeof(*tmp));
	if (!tmp)
		return (NULL);
	ft_bzero(tmp, size);
	return (tmp);
}
