#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		len;
	char	*temp;

	i = 0;
	len = ft_strlen(s1);
	temp = (char *)malloc((len + 1) * sizeof(*temp));
	if (temp == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		temp[i] = s1[i];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}
