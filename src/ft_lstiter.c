#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	if (f == NULL && lst == NULL)
		return ;
	while (lst)
	{
		f(lst);
		lst = lst->next;
	}
}
