#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst == NULL || src == NULL)
		return (NULL);
	if (dst == src)
		return (dst);
	if (dst < src)
		ft_memcpy(dst, src, n);
	else
		revmemcpy(dst, src, n);
	return (dst);
}
