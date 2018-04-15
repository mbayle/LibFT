#include <string.h>
#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem))
{
	t_list	*newlist;

	if (lst == NULL || f == NULL)
		return (NULL);
	newlist = NULL;
	while (lst != NULL)
	{
		ft_lstaddq(&newlist, f(lst));
		lst = lst->next;
	}
	return (newlist);
}
