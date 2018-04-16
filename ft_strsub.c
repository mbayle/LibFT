/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabayle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 10:12:03 by mabayle           #+#    #+#             */
/*   Updated: 2018/04/16 10:18:23 by mabayle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*return_str;
	size_t	i;

	i = 0;
	s = s + start;
	return_str = (char *)malloc((len + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	if (return_str == NULL)
		return (NULL);
	while (i < len)
	{
		return_str[i] = s[i];
		++i;
	}
	return_str[len] = '\0';
	return (return_str);
}
