#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	return_str;
	size_t	len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	return_str = (char*) malloc((len + 1) * sizeof (char));
	if (return_str == NULL)
		return (NULL);
	ft_strcpy(return_str, s1);
	ft_strcat(return_str, s2);
	return_str[len] = '\0';
	return (return_str);
}
