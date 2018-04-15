#include "libft.h"
#include <string.h>

char	*ft_strnew(size_t size)
{
	char	*to_return;

	return_str = (char*) malloc((size + 1) * sizeof (char));
	if (return_str == NULL)
		return (NULL);
	ft_bzero(return_str, size);
	return_str[size] = '\0';
	return (return_str);
}
