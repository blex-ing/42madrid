/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleespin <aleespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:56:01 by aleespin          #+#    #+#             */
/*   Updated: 2023/10/05 18:23:01 by aleespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isspace(char space)
{
	if (((space >= 9) && (space <= 13)) || (space == 32))
	{
		return (1);
	}
	return (0);
}

int	ft_isoperator(char operator)
{
	if (operator == '-' || operator == '+')
		return (1);
	return (0);
}



int	ft_atoi(char *str)
{
	char	*mov;
	int		operator;
	int		num;

	mov = str;
	operator = 1;
	num = 0;
	while (ft_isspace(*mov))
	{
		mov++;
	}
	while (ft_isoperator(*mov))
	{
		if (*mov == '-')
			operator *= -1;
		mov++;
	}
	while (ft_isdigit(*mov) && (*mov != '\0'))
	{
		num = (num * 10) + (*mov - '0');
		mov++;
	}
	return (operator * num);
}

