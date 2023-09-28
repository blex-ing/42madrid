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
    char src[] = "test basic du memcpy !";
    char buff1[22];
    char buff2[22];
 
    memcpy(buff1, src, 22);
    ft_memcpy(buff2, src, 22);
    if (!memcmp(buff1, buff2, 22))
        ft_print_line("TEST_SUCCESS");
    else
         ft_print_line("TEST_FAILED");
    // assert(ft_memset(cadena, '0', sizeof(cadena)) == memset(cadena, '0', sizeof(cadena1)));
    // memset(cadena, '\0', sizeof(cadena1));
    printf("tamanios: src: %ld dest :%ld \n", ft_strlen(src), ft_strlen(buff1));
    ft_print_line("\n");

    ft_print_line(buff1);
    ft_print_line("\n");
    ft_print_line("\n");
    ft_print_line(buff2);
    ft_print_line("\n");
    return (0);
}