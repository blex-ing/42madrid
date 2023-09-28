#include <stdio.h>
#include <ctype.h>
#include "../libft.h"
#include <stdbool.h>
#include <string.h>
 
#include <assert.h>

int main(void) 
{ 
    char str1[] = "Hola";
    char str2[] = "Hola alex"; 
    // bool result1 = ft_strlen(str1) == 4;
    // bool result2 = (ft_strlen == strlen(str1));
    assert(ft_strlen(str1) == 4);
    assert(ft_strlen(str1) == strlen(str1));
    assert(ft_strlen(str2) == strlen(str2));
    assert(ft_strlen(str2) == strlen(str2));

    printf("resultado ft: %ld y strlen: %ld \n", ft_strlen(str1), strlen(str1));

    return 0; 
} 
