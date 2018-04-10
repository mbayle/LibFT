/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabayle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 18:15:40 by mabayle           #+#    #+#             */
/*   Updated: 2018/04/10 16:29:09 by mabayle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 3)
	{
		char *dest;
		char *src;

		dest[] = argv[1][];
		src[] = argv[2][];

		ft_strcpy(&dest, &src);
		strcpy(&dest, &src);
		printf("Fonction originale resultat : %s\n", dest);
		printf("Fonction ft_strcpy resultat : %s\n", dest);
		return (1);
	}
	return (0);
}
