/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleespin <aleespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:11:19 by aleespin          #+#    #+#             */
/*   Updated: 2023/10/31 19:51:16 by aleespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	**ft_split(const char *s, char c)
{
    char *sentinela;
    char **big_r;
    int num_c;
    sentinela = (char *)s;
    num_c = 0;
    while (*sentinela)
    {
        if (*sentinela  == c)
            num_c++;
    }
    big_r = (char **)malloc(sizeof(char *) * (num_c + 1));
    if(big_r == NULL)
        return (NULL);
    ft_bzero(big_r,0);
    int cont = 0;
    char *punt_c;
    while (big_r[cont] != '\0')
    {
        punt_c =ft_strchr(sentinela, c);
        big_r[cont] = (char *)malloc((punt_c - sentinela) * sizeof(char));
        sentinela = punt_c + 1;
        
    }

    return (big_r);
    

    

	// char	**matrix;
	// size_t	len;
	// size_t	i;
	// size_t	sl;

	// i = 0;
	// sl = 0;
	// len = ft_numstring(s, c);
	// matrix = (char **)malloc(sizeof(char *) * (len + 1));
	// if (!matrix)
	// 	return (NULL);
	// while (i < len)
	// {
	// 	while (*s == c)
	// 		s++;
	// 	sl = ft_numchar((const char *)s, c);
	// 	matrix[i] = (char *)malloc(sizeof(char) * sl + 1);
	// 	if (!matrix[i])
	// 		return (ft_free_matrix((const char **)matrix, len));
	// 	ft_strlcpy(matrix[i], s, sl + 1);
	// 	s = (ft_strchr(s, (int)c));
	// 	i++;
	// }
	// matrix[i] = 0;
	// return (matrix);
}
