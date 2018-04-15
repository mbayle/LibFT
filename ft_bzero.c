#include "libft.h"
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	char	*tmp;

	tmp = s;
	while (n > 0)
	{
		*tmp = '\0';
		tmp++;
	}
}
