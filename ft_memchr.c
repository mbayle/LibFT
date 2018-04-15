#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = (char *) s;
	if (s == NULL)
		return (NULL);
	while (i < n)
	{
		if (ptr[i] == (unsigned char) c)
			return (&(ptr[i]));
		++i;
	}
	return (NULL);
}
