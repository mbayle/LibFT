/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabayle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 10:08:37 by mabayle           #+#    #+#             */
/*   Updated: 2018/04/19 12:48:06 by mabayle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			i;
	unsigned int	count;
	char			*return_str;

	i = 0;
	count = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	if (!(return_str = ft_strnew(sizeof(char) * ft_strlen(s))))
		return (NULL);
	while (s[i] != '\0')
	{
		return_str[i] = f(count++, s[i]);
		i++;
	}
	return (return_str);
}
