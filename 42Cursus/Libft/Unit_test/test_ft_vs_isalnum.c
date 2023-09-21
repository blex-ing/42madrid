#include <stdio.h>
#include <ctype.h>
#include "../libft.h"
 
int main(void) {
    int result;

    // Prueba 1: caracteres alfanumericos
    printf("Prueba 1\n");

    printf("Caracteres alfanumericos:\n");

    printf("todos los caracteres de la tabla ascii:\n");

    for (int i = 0; i <= 255; i++) {     
        result = ft_isalnum(i);     
        if ((result < 1) && (isalnum(i) < 1)) {
            printf("Error en el caracter %c\n val %d , %d \n", i,result, isalnum(i));
        } else {
            printf("OK para el caracter %c\n val %d , %d \n", i,result, isalnum(i));
            }                                              }

    
    }