#include "libft.h"

static int	ft_get_len(char const *str, char c)
{
	int i;
	int	len;

	i = 0;
	len = 0;
	while (str[i] == c)
		i++;
	while (str[i] != c && str[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

static int	ft_count_str(char const *str, char c)
{
	int i;
	int	n;

	i = 0;
	n = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != c && str[i] != '\0')
			n++;
		while (str[i] != c && str[i] != '\0')
			i++;
	}
	return (n);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**str;

	if (!s)
		return (NULL);
	if (!(str = (char **)malloc(sizeof(*str) * (ft_count_str(s, c) + 1))))
		return (NULL);
	i = -1;
	j = 0;
	while (++i < ft_count_str(s, c))
	{
		k = 0;
		str[i] = ft_strnew(ft_get_len(&s[j], c) + 1);
		if (!str[i])
			str[i] = NULL;
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j] != '\0')
			str[i][k++] = s[j++];
		str[i][k] = '\0';
	}
	str[i] = 0;
	return (str);
}
