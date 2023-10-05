/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleespin <aleespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:31:54 by aleespin          #+#    #+#             */
/*   Updated: 2023/10/05 17:51:32 by aleespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*aux;

	i = len;
	if (*little == '\0')
		return ((char *)big);
	while (*big && (len > 0))
	{
		aux = (char *)big;
		i = 0;
		j = len;
		while ((*(little + i) != 0) && (*(little + i) == *(aux + i)) && (j > 0))
		{
			i++;
			j--;
		}
		if (*(little + i) == '\0')
			return (aux);
		len--;
		big++;
	}
	return (0);
}
