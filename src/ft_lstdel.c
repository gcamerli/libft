#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*l_new;

	if (alst && del)
	{
		while (*alst)
		{
			l_new = (*alst)->next;
			ft_lstdelone(alst, del);
			*alst = l_new;
		}
		*alst = NULL;
	}
}
