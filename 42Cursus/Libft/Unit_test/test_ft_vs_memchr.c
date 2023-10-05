#include <ctype.h>
#include <string.h>
#include <stdio.h>

int main()
{
    const char src[] = "hola";
    char c = 'o';
    char *i;

    i = memchr(src, c, strlen(src));

    printf("salida de strlcpy i: %p", i);
    printf("cpmtemido de p: %c \n", *i);


    const char src1[] = "hola";
    char c1 = ' ';
    char *i1;

    i1 = memchr(src1, c1, strlen(src1));

    printf("salida de strlcpy i: %p", i1);
    printf("cpmtemido de p: %s \n", i1);
    return (0);
}