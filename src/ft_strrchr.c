#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		result;

	i = 0;
	result = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			result = i + 1;
		i++;
	}
	if (result)
		return (&((char *)s)[result - 1]);
	else if (s[i] == c)
		return (&((char *)s)[i]);
	return (NULL);
}
