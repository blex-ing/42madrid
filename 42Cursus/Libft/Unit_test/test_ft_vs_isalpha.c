#include <stdio.h>
#include <ctype.h>
#include "libft.h"
 
int main(void) {
    int result;

    // Prueba 1: caracteres alfabéticos mayúsculas y minúsculas
    printf("Prueba 1\n");

    printf("Caracteres alfabéticos mayúsculas:\n");

    for (int i = 'A'; i <= 'Z'; i++) {
        result = ft_isalpha(i);

        if ((result < 1) && (isalpha(i) < 1)) {
            printf("Error en el caracter %c\n val %d , %d \n", i,result, isalpha(i)); 
        } else { 
            printf("OK para el caracter %c\n val %d , %d \n", i,result, isalpha(i)); 
        } 									  	  	  	  	  	  }

    printf("Caracteres alfabéticos minúsculas:\n");

    for (int i = 'a'; i <= 'z'; i++) { 
        result = ft_isalpha(i);

        if ((result < 1) && (isalpha(i) < 1)) { 
            printf("Error en el caracter %c\n val %d , %d \n", i,result, isalpha(i)); 
        } else { 
            printf("OK para el caracter %c\n val %d , %d \n", i,result, isalpha(i)); 
        }     }

    // Prueba 2: caracteres no alfabéticos mayúsculas y minúsculas    

    printf("Prueba 2\n");

    printf("Caracteres no alfabéticos mayúsculas:\n");

    for (int i = 0; i <= 64; i++) {     
        result = ft_isalpha(i);     
        if ((result < 1) && (isalpha(i) < 1)) {
            printf("Error en el caracter %c\n val %d , %d \n", i,result, isalpha(i));
        } else {
            printf("OK para el caracter %c\n val %d , %d \n", i,result, isalpha(i));
            }                                              }

    for (int j = 91; j <= 96; j++) {      
        result = ft_isalpha(j);      
        if ((result < 1) && (isalpha(j) < 1)) 
        {          
            printf("Error en el caracter %c\n", j);      
        }
        else
        {          
            printf("OK para el caracter %c\n", j);      
        }                                               }

    for (int k = 123; k <= 127; k++) {      result = ft_isalpha(k);      if ((result < 1) && (isalpha(k) < 1)) {          printf("Error en el caracter %c\n", k);      } else {          printf("OK para el caracter %c\n", k);      }                                               }

    // Prueba 3: espacios en blanco y tabulaciones    

    int whiteSpace1, whiteSpace2, whiteSpace3, whiteSpace4;     
    whiteSpace1 = 32; // Espacio simple     
    whiteSpace2 = 9; // Tabulación horizontal     
    whiteSpace3 = 11; // Tabulación vertical     
    whiteSpace4 = 12; // Tabulación de formato  

    int ws1Result, ws2Result, ws3Result, ws4Result;       
    ws1Result= ft_isalpha(whiteSpace1);       
    ws2Result= ft_isalpha(whiteSpace2);       
    ws3Result= ft_isalpha(whiteSpace3);       
    ws4Result= ft_isalpha(whiteSpace4);  

    if ((ws1Result == 0) && (ws2Result == 0) && (ws3Result == 0) && (ws4Result == 0))
    {
        printf("Prueba 3 pasada con éxito! \n");     
    } 
    else
    {
        return -1;
    };  

//    // Prueba 4: nulo y puntero nulo   
//    int nullChar, nullPtr;       
//    nullChar=0 ;       
//    nullPtr=NULL ;   
//    int nCRes, nPRes ;       
//    nCRes=ft_isupper(nullChar) ;       
//    nPRes=ft_islower(nullPtr) ;   
//    if ((nCRes==0)&& (nPRes==0)){         
//     pritf("Prueba 4 pasada con éxito! \n") ;
//     }else{
//         return -1;
//     }
//     // Prueba 5
    }