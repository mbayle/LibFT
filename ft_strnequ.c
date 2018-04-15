#include <string.h>
#include "libft.h"

int     ft_strequ(char const *s1, char const *s2)
{
        if (s1 == NULL && s2 == NULL)
                return (1);
        if (s1 == NULL || s2 == NULL)
                return (0);
        while (*s1 && *s2 && n--)
        {
                if (*s1 != *s2)
                        return (0);
                s1++;
                s2++;
        }
}
