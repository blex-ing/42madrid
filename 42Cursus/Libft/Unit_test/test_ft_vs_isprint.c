#include <stdio.h>
#include <ctype.h>
#include "../libft.h"
 
int main(void) {
    int result;

    // Prueba 1: caracteres imprimibles
    printf("Prueba 1\n");

    printf("Caracteres imprimibles:\n");

    printf("todos los caracteres imprimibles de la tabla ascii:\n");

    for (int i = 0; i <= 255; i++) {     
        result = ft_isprint(i);     
        if ((result < 1) && (isprint(i) < 1)) {
            printf(" %d : Error en el caracter %c\n val %d | %d \n", i,i,result, isprint(i));
        } else {
            printf(" %d : OK para el caracter %c\n val %d , %d \n", i, i,result, isprint(i));
            }                                              }

    
    }