/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabayle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 10:06:19 by mabayle           #+#    #+#             */
/*   Updated: 2018/04/18 21:16:49 by mabayle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dup;

	if (!(dup = ft_strnew(sizeof(char) * ft_strlen(src))))
		return (NULL);
	return (ft_strcpy(dup, src));
}
