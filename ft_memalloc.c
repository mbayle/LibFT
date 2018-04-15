#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*ret_str;

	ret_str = (void *)malloc(size * sizeof(size_t));
	if (ret_str == NULL)
		return (NULL);
	ft_bzero(ret_str, size);
	return (ret_str);
}
