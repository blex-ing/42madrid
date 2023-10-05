#include <ctype.h>
#include <string.h>
#include <stdio.h>

int main()
{
    const char src[] = "ho";
    char dst[] = "ho";
    int i;

    i = strncmp(dst, src, 1);

    printf("salida de strlcpy i: %d", i);
    return (0);
}