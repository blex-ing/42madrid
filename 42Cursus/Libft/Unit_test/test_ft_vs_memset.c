#include <stdio.h>
#include <ctype.h>
#include "../libft.h"
#include <unistd.h>
#include <string.h>
#include <assert.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_line(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}


int main(void)
{
    char cadena[6];
    char cadena1[6];
    
    assert(ft_memset(cadena, '0', sizeof(cadena)) == memset(cadena, '0', sizeof(cadena1)));
    ft_memset(cadena1, '1', sizeof(cadena));
    // memset(cadena, '\0', sizeof(cadena1));
    ft_print_line(cadena1);
    ft_print_line("\n");
    ft_print_line("\n");
    ft_print_line(cadena);
    return (0);
}