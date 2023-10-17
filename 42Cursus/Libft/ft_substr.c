#include "libft.h"
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char	*new;
	size_t	slen;
	size_t	finish;

	if (!s)
		return (0);
	slen = ft_strlen(s);
	finish = 0;
	if (start < slen)
		finish = slen - start;
	if (finish > len)
		finish = len;
	new = (char *)malloc(sizeof(char) * (finish + 1));
	if (!new)
		return (0);
	else if (start < 4294967295)
	{
		ft_strlcpy(new, s + start, finish + 1);
	}
	else
	{
		start = 0;
		ft_strlcpy(new, s + start, finish + 1);
	}
	return (new);
}