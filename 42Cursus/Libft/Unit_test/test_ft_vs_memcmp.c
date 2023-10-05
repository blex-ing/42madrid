#include <ctype.h>
#include <string.h>
#include <stdio.h>

int main()
{
    const char src[] = "hola";
    const char c[] = "ho";
    int i;

    i = memcmp(src, c, strlen(src));

    printf("salida de memcmp i: %d", i);
    printf("cpmtemido de p: %d \n", i);


    const char src1[] = "abcfefg";
    const char c1[] = "efg";
    int i1;

    i1 = memcmp(src1, c1, strlen(src1));

    printf("salida de memcmp i: %d", i1);
    printf("cpmtemido de p: %d \n", i1);

    const char src2[] = "hola";
    const char c2[] = "hola";
    int i2;

    i2 = memcmp(src2, c2, strlen(src2));

    printf("salida de memcmp i: %d \n", i2);

    const char src3[] = "ho";
    const char c3[] = "holaa";
    int i3;

    i3 = memcmp(src3, c3, strlen(c3));

    printf("salida de memcmp i: %d \n", i3);

    return (0);
}