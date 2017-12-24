#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*tmp;
	size_t	i;

	if (s != NULL)
	{
		i = 0;
		tmp = (char *)malloc((len + 1) * sizeof(*tmp));
		if (tmp)
		{
			while (i < len)
			{
				tmp[i] = s[start + i];
				i++;
			}
			tmp[i] = '\0';
			return (tmp);
		}
	}
	return (NULL);
}
