#include <stdio.h>
#include <ctype.h>
#include "../libft.h"
 
int main(void) {
    int result;

    // Prueba 1: caracteres alfanumericos
    printf("Prueba 1\n");

    printf("Caracteres ascii:\n");

    printf("todos los caracteres de la tabla ascii:\n");

    for (int i = 0; i <= 255; i++) {     
        result = ft_isascii(i);     
        if ((result < 1) && (isascii(i) < 1)) {
            printf(" %d : Error en el caracter %c\n val %d , %d \n", i,i,result, isascii(i));
        } else {
            printf(" %d : OK para el caracter %c\n val %d , %d \n", i, i,result, isascii(i));
            }                                              }

    
    }