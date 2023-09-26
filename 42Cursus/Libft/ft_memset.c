/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleespin <aleespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 16:59:48 by aleespin          #+#    #+#             */
/*   Updated: 2023/09/22 17:12:22 by aleespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, int n)
{
	int		cont;
	char	*aux;

	aux = s;
	cont = n;
	while (cont > 0)
	{
		*aux = c;
		++s;
		aux--;
	}
	return (s);
}
