
#include "libft.h"

int	ft_isalpha(char *str)
{
	while (*str != '\0')
	{
		if (((*str < 'a') || (*str > 'z')) && ((*str < 'A') || (*str > 'Z')))
		{
			return (0);
		}
		str++;
	}
	return (1);
}