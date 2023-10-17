#include "libft.h"
#include <stdlib.h>

char *ft_strdup(const char *s)
{
    size_t size_s;
    char *aux;

    size_s = ft_strlen((char *) s);
    aux = malloc(size_s * sizeof(char) + 1);
    if(aux == NULL)
        return (0);
    ft_memcpy(aux, s, size_s);
    aux[size_s] = '\0';
    return (aux);
}
