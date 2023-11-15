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
#include <stdio.h>
#include <stdint.h>

char	**ft_split(const char *s, char c)
{
      if(ft_strlen(s) != '\0')
    {
        char *partida = (char *)s;
        // char *split;
        char **cadena_split;
       // = (char **)malloc(sizeof(char *) * 10);
        int indice = 0;
        while (*partida != '\0')
        {
            if (*partida != c && (*(partida + 1) == c))
                indice++;
            partida++;
        }
        if(indice > 0)
        {
            cadena_split = (char **)malloc(sizeof(char *) * (indice + 1));
            if(cadena_split == NULL)
                return (NULL);
            // printf(" \n#cadena split: %d\n",indice);
            // printf("#\ncadena split + 1: %d\n", indice + 1);
            partida = (char *)s;
           // char *aux_s = (char *)s;
            int indice_1 = 0;
            int x = 0;
            
            while (*partida != '\0')
            {
                if (*(s + x) != c)
                {
                    int y = 0;
                    while(*(s + x + y) != c)
                        y++;
                    char *split;
                    split = ft_substr(s, (unsigned int) x, (size_t) (x + y));
                    // printf("split: %s\n", split);
                    cadena_split[indice_1] = ft_strdup(split);
                    //aux_s = partida + 1;
                    partida = (partida + y);
                    indice_1++;
                }
                partida++;
            }
            return (cadena_split);
        }else
        {
            char **matriz;
            matriz = (char **)malloc(sizeof(char));
           // *matriz = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
            *matriz = ft_substr(s, 0, ft_strlen(s));
            *(matriz + 1) = '\0';

            return (matriz);
        }
    }
    return ((char **)s);
    // char *sentinela;
    // char **big_r;
    // int num_c;
    // sentinela = (char *)s;
    // num_c = 0;
    // while (*sentinela)
    // {
    //     if (*sentinela  == c)
    //         num_c++;
    // }
    // big_r = (char **)malloc(sizeof(char *) * (num_c + 1));
    // if(big_r == NULL)
    //     return (NULL);
    // ft_bzero(big_r,0);
    // int cont = 0;
    // char *punt_c;
    // while (big_r[cont] != '\0')
    // {
    //     punt_c =ft_strchr(sentinela, c);
    //     big_r[cont] = (char *)malloc((punt_c - sentinela) * sizeof(char));
    //     sentinela = punt_c + 1;
        
    // }

    // return (big_r);
    

    

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
