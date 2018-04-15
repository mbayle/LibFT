#include "libft.h"

static void	*revmemcpy(void * s1, const void * s2, size_t n)
{
	char	*dst;
	char	*src;
	size_t	i;

	dst = (char*) s1;
	src = (char*) s2;
	i = n;
	while (i > 0)
	{
		dst[i - 1] = src[i - 1];
		--i;
	}
	return (s1);
}
