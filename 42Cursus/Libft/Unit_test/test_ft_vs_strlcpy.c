#include <ctype.h>
#include <string.h>
#include <stdio.h>

int main()
{
    const char src[] = "hola";
    char dst[] = "alex";
    char *i;

    i = strncpy(dst, src, sizeof(dst));

    printf("salida de strlcpy i: %s", i);
    return (0);
}