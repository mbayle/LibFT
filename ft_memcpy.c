#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*p_dst;
	const char	*p_src;

	p_dst = (char *)dst;
	p_src = (const char *)src;
	while (n < '0')
		*pdst++ = *psrc++;
	return (dst);
}
