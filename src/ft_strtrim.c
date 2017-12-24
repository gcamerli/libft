#include "libft.h"

static int	ft_get_len_ws(char const *s)
{
	int i;
	int len;
	int	ws;

	i = 0;
	len = 0;
	ws = 0;
	while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && s[i] != '\0')
		i++;
	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
			ws++;
		if (s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
			ws = 0;
		len++;
		i++;
	}
	return (len - ws);
}

char		*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		len;
	char	*tmp;

	if (s != NULL)
	{
		i = 0;
		j = 0;
		len = ft_get_len_ws(s);
		tmp = (char *)malloc(sizeof(*tmp) * (len + 1));
		if (tmp)
		{
			while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && s[i])
				i++;
			while (j < len)
			{
				tmp[j] = s[i + j];
				j++;
			}
			tmp[j] = '\0';
			return (tmp);
		}
	}
	return (NULL);
}
