/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabayle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 10:08:37 by mabayle           #+#    #+#             */
/*   Updated: 2018/04/18 21:14:10 by mabayle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			i;
	size_t			len;
	unsigned int	count;
	char			*return_str;

	i = 0;
	len = ft_strlen(s);
	count = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	if (!(return_str = (char*)malloc((len + 1) * sizeof(char))))
		return (NULL);
	while (s[i] != '\0')
	{
		return_str[i] = f(count++, s[i]);
		++i;
	}
	return_str[i] = '\0';
	return (return_str);
}
