#include <string.h>
#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*str;

	if (src == NULL)
		return (NULL);
	str = malloc(sizeof (*str) * ft_strlen(src));
	i = 0;
	while (src[i] != '\0')
	{
		str[i] = src[i];
		++i;
	}
	str[i] = '\0';
	return (str);
}
