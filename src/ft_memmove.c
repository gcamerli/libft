#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*pd;
	unsigned char	*ps;

	pd = (unsigned char *)dst;
	ps = (unsigned char *)src;
	if (src > dst)
		ft_memcpy(dst, src, len);
	else
	{
		i = len;
		while (i)
		{
			pd[i - 1] = ps[i - 1];
			i--;
		}
	}
	return (dst);
}
