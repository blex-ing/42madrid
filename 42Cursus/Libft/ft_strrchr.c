/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleespin <aleespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:31:54 by aleespin          #+#    #+#             */
/*   Updated: 2023/10/05 15:37:37 by aleespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*aux;

	aux = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			aux = ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (aux);
}
