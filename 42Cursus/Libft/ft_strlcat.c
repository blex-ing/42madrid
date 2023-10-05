/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleespin <aleespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 16:59:48 by aleespin          #+#    #+#             */
/*   Updated: 2023/10/05 15:32:35 by aleespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	cont;
	size_t	size_buff;
	size_t	size_src;
	size_t	size_dst;

	size_src = ft_strlen(src);
	size_dst = ft_strlen(dst);
	cont = 0;
	size_buff = 0;
	if (size_dst > size)
		size_buff = size + size_src;
	else
		size_buff = size_dst + size_src;
	cont = 0;
	if (size != 0)
	{
		while ((src[cont] != '\0') && (size_dst < size -1))
		{
			dst[size_dst] = src[cont];
			cont++;
			size_dst++;
		}
		dst[size_dst] = '\0';
	}
	return (size_buff);
}
