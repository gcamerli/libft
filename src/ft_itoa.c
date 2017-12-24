#include "libft.h"

static size_t	ft_get_len_nb(int n)
{
	size_t	len;

	len = 1;
	while (n /= 10)
		len++;
	return (len);
}

char			*ft_itoa(int n)
{
	char			*str;
	size_t			len;
	unsigned int	tmp;

	len = ft_get_len_nb(n);
	tmp = n;
	if (n < 0)
	{
		tmp = -n;
		len++;
	}
	str = ft_strnew(len);
	if (!str)
		return (NULL);
	str[--len] = tmp % 10 + '0';
	while (tmp /= 10)
		str[--len] = tmp % 10 + '0';
	if (n < 0)
		*(str + 0) = '-';
	return (str);
}
