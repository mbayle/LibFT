#include <string.h>
#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t nb)
{
	char	*p_dest;

	p_dest = s1;
	if(dest == NULL || src == NULL)
		return (NULL);
	while (*p_dest != '\0')
	{
		p_dest++;
	}
	while (*src != '\0' && nb > 0)
	{
		*p_dest = *src;
		p_dest++;
		src++;
		nb--;
	}
	*p_dest = '\0';
	return (dest);
}
