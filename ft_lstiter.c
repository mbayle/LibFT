#include <string.h>
#include "libft.h"

void		ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*next;

	if (lst == NULL || f == NULL)
		return ;
	while (lst != NULL)
	{
		next = lst->next;
		f(lst);
		lst = next;
	}
}
