/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleespin <aleespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:31:54 by aleespin          #+#    #+#             */
/*   Updated: 2023/09/21 17:36:25 by aleespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;

    i = 0;

    while (*big)
    {
        i = len;
        while (*little)
        {
             if (ft_memchr(big,*little,i--)!= NULL)
             {
                 little++;
             }
        }

        if(*little == '\0')
            return ((char *)big);
        else big++;
    }

    return (NULL);
}