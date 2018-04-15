/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabayle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 16:36:36 by mabayle           #+#    #+#             */
/*   Updated: 2018/04/10 16:59:11 by mabayle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	int				j;

	i = 0;
	j = 0;
	if (n == 0)
		return (0);
	while (s1[j] == s2[j] && s1[j] != '\0' && s2[j] != '\0' && i < n)
	{
		i++;
		j++;
	}
	return (s1[j] - s2[j]);
}
