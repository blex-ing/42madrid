//main.c
#include <stdio.h>
#include "libft.h"

int main(int argc, char *argv[]) 
{

    if (ft_isalpha(argv[1]) == 1)
    {
        printf("OK\n");
    }
    else
    {
        printf("False\n");
    }
    return (0);
}