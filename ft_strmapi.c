#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
        size_t  i;
        size_t  len;
        char    *return_str;

	i = 0;
	len = ft_strlen(s);
        if (s == NULL || f == NULL)
                return (NULL);
        return_str = (char*) malloc((length + 1) * sizeof (s));
        while (s[i] != '\0')
        {
                return_str[i] = f(i, s[i]);
                ++i;
        }
        return_str[i] = '\0';
        return (return_str);
}
