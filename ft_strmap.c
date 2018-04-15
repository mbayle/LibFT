#include <string.h>
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	size_t	len;
	char	*return_str;

	i = 0;
	len = ft_strlen(s);
	if (s == NULL || f == NULL)
		return (NULL);
	return_str = (char*) malloc((length + 1) * sizeof (char));
	while (s[i] != '\0')
	{
		return_str[i] = f(s[i]);
		++i;
	}
	return_str[i] = '\0';
	return (return_str);
}
