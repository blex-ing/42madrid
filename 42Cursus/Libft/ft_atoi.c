/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleespin <aleespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:56:01 by aleespin          #+#    #+#             */
/*   Updated: 2023/10/05 19:07:17 by aleespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	char	*mov;
	int		operator;
	int		num;

	mov = (char *)str;
	operator = 1;
	num = 0;
	while (((*mov >= 9) && (*mov <= 13)) || (*mov == 32))
		mov++;
    if (*mov == '-')
    {
		operator *= -1;
        mov++;
        if( *mov == '+' || *mov == '-')
            return (0);
    }
    if (*mov == '+')
    {
        mov++;
        if( *mov == '+' || *mov == '-')
            return (0);
    }
	while (ft_isdigit(*mov) && (*mov != '\0'))
	{
		num = (num * 10) + (*mov - '0');
		mov++;
	}
	return (operator * num);
}

