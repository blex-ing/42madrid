#include "libft.h"

void *ft_memset(void *str, int c, int n)
{
	int	cont;

	cont = n;
	while (cont > 0)//(*str != '\0')
	{
        *str = c;
        ++str;
        cont--;
	}
}