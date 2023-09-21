#include <stdio.h>
#include <ctype.h>
#include "../libft.h"
 
int main(void) {
    int result;

    // Prueba 1: caracteres alfabéticos mayúsculas y minúsculas
    printf("Prueba 1\n");

    printf("Caracteres numericos:\n");

    for (int i = '0'; i <= '9'; i++) {
        result = ft_isdigit(i);

        if ((result < 1) && (isdigit(i) < 1)) {
            printf("Error en el caracter %c\n val %d , %d \n", i,result, isdigit(i)); 
        } else { 
            printf("OK para el caracter %c\n val %d , %d \n", i,result, isdigit(i)); 
        } 									  	  	  	  	  	  }

    
    // Prueba 2: caracteres no alfabéticos mayúsculas y minúsculas    

    printf("Prueba 2\n");

    printf("todos los caracteres de la tabla ascii:\n");

    for (int i = 0; i <= 255; i++) {     
        result = ft_isdigit(i);     
        if ((result < 1) && (isdigit(i) < 1)) {
            printf("Error en el caracter %c\n val %d , %d \n", i,result, isdigit(i));
        } else {
            printf("OK para el caracter %c\n val %d , %d \n", i,result, isdigit(i));
            }                                              }

    
    }