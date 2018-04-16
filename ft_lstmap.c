/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabayle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 09:53:53 by mabayle           #+#    #+#             */
/*   Updated: 2018/04/16 18:07:18 by mabayle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*newlist;

	if (lst == NULL || f == NULL)
		return (NULL);
	newlist = NULL;
	while (lst != NULL)
	{
		ft_lstadd(&newlist, f(lst));
		lst = lst->next;
	}
	return (newlist);
}
