#include "libft.h"
#include <stdlib.h>

char **ft_split(char const *s, char c)
{
    if(ft_strlen(s) != '\0')
    {
        char *partida = (char *)s;
        char *split;
        char **cadena_split = (char **)malloc(sizeof(char *) * 10);
        int indice = 0;
        while (*partida != '\0')
        {
            if (*partida == c)
            {
                split = ft_substr(s, 0, ft_strlen(s) - ft_strlen(partida));
                // printf("split: %s\n", split);
                cadena_split[indice] = ft_strdup(split);
                s = partida + 1;
                indice++;
            }
            partida++;
        }
        return (cadena_split);
    }
    return ((char **)ft_strdup(s));
}