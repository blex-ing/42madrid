
#include "libft.h"
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    char *aux_s3;
	char *s3;

    s3 = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
    aux_s3 = s3;
    if (!s3)
        return (NULL);
    
    while (*s1 != '\0')
    {
        *aux_s3 = *s1;
        s1++;
        aux_s3++;
    }
    while (*s2 != '\0')
    {
        *aux_s3 = *s2;
        aux_s3++;
        s2++;
    }
    *aux_s3 = '\0';
    return (s3);
}
