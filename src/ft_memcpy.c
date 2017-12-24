#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*dp;
	char		*sp;

	i = 0;
	dp = (char *)dst;
	sp = (char *)src;
	while (i < n)
	{
		dp[i] = sp[i];
		i++;
	}
	return (dst);
}
