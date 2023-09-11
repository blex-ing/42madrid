/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleespin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 22:51:11 by aleespin          #+#    #+#             */
/*   Updated: 2023/06/07 12:59:15 by aleespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char f1, char f2, char s1, char s2)
{
	write(1, &f1, 1);
	write(1, &f2, 1);
	write(1, " ", 1);
	write(1, &s1, 1);
	write(1, &s2, 1);
	if (!((f2 == '8' ) && (f1 == '9')))
	{
		write(1, ", ", 2);
	}
}

void	ft_numbers_to_char(int first, int second)
{
	char	f1;
	char	f2;
	char	s1;
	char	s2;

	f2 = first % 10 + '0';
	f1 = first / 10 + '0';
	s2 = second % 10 + '0';
	s1 = second / 10 + '0';
	ft_putchar(f1, f2, s1, s2);
}

void	ft_print_comb2(void)
{
	int	first;
	int	second;

	first = 0;
	while (first <= 98)
	{
		second = first + 1;
		while (second <= 99)
		{
			ft_numbers_to_char(first, second);
			second++;
		}
		first++;
	}
}
