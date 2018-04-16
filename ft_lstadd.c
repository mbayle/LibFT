/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabayle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 09:53:11 by mabayle           #+#    #+#             */
/*   Updated: 2018/04/16 18:06:47 by mabayle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void		ft_lstadd(t_list **alst, t_list *newe)
{
	if (alst == NULL || newe == NULL)
		return ;
	newe->next = *alst;
	*alst = newe;
}
