#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*dst_cpy;
	const char	*src_cpy;
	size_t		i;
	size_t		dst_len;

	dst_cpy = dst;
	src_cpy = src;
	i = size;
	while (i-- != 0 && *dst_cpy != '\0')
		++dst_cpy;
	dst_len = dst_cpy - dst;
	i = size - dlen;
	if (i == 0)
			return (dst_len + ft_strlen(src_cpy));
	while (*src_cpy != '\0')
	{
		if (i != 1)
		{
			*dst_cpy++ = *src_cpy;
			--i;
		}
		++src_cpy;
	}
	*dst_cpy = '\0';
	return (dst_len + (src_cpy - src));
}
