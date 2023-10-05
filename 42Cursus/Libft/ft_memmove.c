/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleespin <aleespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 16:59:48 by aleespin          #+#    #+#             */
/*   Updated: 2023/10/05 15:09:16 by aleespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = dest;
	s = src;
	if (dest == NULL && src == NULL)
		return (0);
	else if (dest < src)
		d = ft_memcpy(dest, src, n);
	else
	{
		d = dest + n - 1;
		s = src + n - 1;
		while (n > 0)
		{
			*d = *s;
			s--;
			d--;
			n--;
		}
	}
	return (dest);
}
