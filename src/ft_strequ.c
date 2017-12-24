#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	if (s1 != NULL && s2 != NULL)
		return (ft_strcmp(s1, s2) == 0);
	return (0);
}
