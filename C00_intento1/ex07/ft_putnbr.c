/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_r.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleespin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 18:26:47 by aleespin          #+#    #+#             */
/*   Updated: 2023/06/07 12:58:35 by aleespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_recursive_function(int num)
{
	int	d;
	int	resto;

	if (num < 10)
	{
		ft_putchar(num + '0');
	}
	else
	{
		d = num / 10;
		resto = num % 10;
		ft_recursive_function(d);
		ft_recursive_function(resto);
	}
}

void	ft_putnbr(int num)
{
	if (num < 0)
	{
		ft_putchar('-');
		if (num == -2147483648)
		{
			write(1, "2147483648", 10);
		}
		else
		{
			num = num * -1;
			ft_recursive_function(num);
		}
	}
	else
	{
		ft_recursive_function(num);
	}
}
