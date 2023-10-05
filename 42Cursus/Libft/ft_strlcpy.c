/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleespin <aleespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 16:59:48 by aleespin          #+#    #+#             */
/*   Updated: 2023/10/05 15:34:02 by aleespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len_dest;
	size_t	len_src;

	len_src = ft_strlen(src);
	len_dest = 0;
	if (size != 0)
	{
		while (*src != '\0' && len_dest < (size -1))
		{
			dst[len_dest] = *src;
			src++;
			len_dest++;
		}
		dst[len_dest] = '\0';
	}
	return (len_src);
}
