/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabayle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 10:02:26 by mabayle           #+#    #+#             */
/*   Updated: 2018/04/18 15:08:31 by mabayle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (c < 0 || c > 255 || c == '\0')
		return (char *)(s + ft_strlen(s));
	while (*s != (char)c)
	{
		++s;
		if (*s == '\0')
			return (NULL);
	}
	return (char *)s;
}
