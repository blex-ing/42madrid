#include <stdlib.h>

char *ft_itoa(int n) {
    int sign = 1;
    int len = 1;
    int temp = n;
    
    // Manejar el caso de números negativos
    if (n < 0) {
        sign = -1;
        len++;
        temp = -temp;
    }
    
    // Calcular la longitud del número
    while (temp >= 10) {
        len++;
        temp /= 10;
    }
    
    // Asignar memoria para la cadena resultante
    char *str = (char *)malloc((len + 1) * sizeof(char));
    if (str == NULL) {
        return NULL;
    }
    
    // Construir la cadena de caracteres
    str[len] = '\0';
    while (len > 0) {
        str[len - 1] = temp % 10 + '0';
        temp /= 10;
        len--;
    }
    
    // Agregar el signo negativo si es necesario
    if (sign == -1) {
        str[0] = '-';
    }
    
    return str;
}
