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

 int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    int cont;

    cont = 0;
    while ((*s1 == *s2) && n > 0 && (*s1) && *s2)
    {
        cont++;
        s1++;
        s2++;
        n--;
    }
    if(n == 0)
        return (0);
    return (*(unsigned char *)s1 - *(unsigned char *)s2);
}