#include "libft.h"

int ft_strlen(char *str)
{
    int cont;
    cont = 0;
    while (*str != '\0')
    {
        ++str;
        cont++;
    }
    return (cont);
}
