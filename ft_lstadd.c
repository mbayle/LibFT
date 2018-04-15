#include <string.h>
#include "libft.h"

void		ft_lstadd(t_list **alst, t_list *newe)
{
	if (alst == NULL || newe == NULL)
		return ;
	newe->next = *alst;
	*alst = newe;
}
