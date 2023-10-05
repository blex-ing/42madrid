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

 void *ft_memchr(const void *s, int c, size_t n)
{
     unsigned char *p; 

    p = (unsigned char *)s; 

    while (n--) { 
        if (*p != (unsigned char)c) 
            p++; 
        else  
            return (p); 
    } 

    return (NULL);
}