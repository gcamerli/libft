#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	size_t	len;
	char	*tmp;

	if (s != NULL && f != NULL)
	{
		i = 0;
		len = ft_strlen(s);
		tmp = (char *)malloc((len + 1) * sizeof(*tmp));
		if (tmp == NULL)
			return (NULL);
		while (i < len)
		{
			tmp[i] = f(s[i]);
			i++;
		}
		tmp[i] = '\0';
		return (tmp);
	}
	return (NULL);
}
