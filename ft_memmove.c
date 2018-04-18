/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabayle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 09:56:43 by mabayle           #+#    #+#             */
/*   Updated: 2018/04/18 21:27:43 by mabayle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*str_dst;
	char		*str_src;

	i = 0;
	str_dst = (char *)dst;
	str_src = (char *)src;
	if (str_dst == str_src)
		return (str_dst);
	if (str_dst < str_src)
		ft_memcpy(str_dst, str_src, len);
	else
	{
		while (len--)
		{
			str_dst[len] = str_src[len];
		}
	}
	return (str_dst);
}
