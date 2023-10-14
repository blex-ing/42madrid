#include <stdio.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    char *i;
    char *j;
	char	*s3;

	i = (char *)s1;
    j = (char *)s2;
    s3 = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
    if (!s3)
        return (NULL);
    while (i)
    {
        *s3 = *i;
        i++;
        s3++;
    }
    while (j)
    {
        *s3 = *j;
    s3++;
    j++;
    }
    *s3 = '\0';
    return (s3);
}
