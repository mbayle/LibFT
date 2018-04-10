/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabayle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 17:15:39 by mabayle           #+#    #+#             */
/*   Updated: 2018/04/10 15:34:06 by mabayle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strlen(char const *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
