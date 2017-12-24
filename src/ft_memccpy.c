#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	pc;
	unsigned char	*pd;
	unsigned char	*ps;

	i = 0;
	pc = c;
	pd = (unsigned char *)dst;
	ps = (unsigned char *)src;
	while (i < n)
	{
		pd[i] = ps[i];
		if (ps[i] == pc)
			return (&pd[i + 1]);
		i++;
	}
	return (NULL);
}
