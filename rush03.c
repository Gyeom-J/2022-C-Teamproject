/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwonpar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 15:13:27 by jiwonpar          #+#    #+#             */
/*   Updated: 2022/01/08 15:13:29 by jiwonpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	x_a;
	int	y_b;

	if (x < 1 || y < 1)
		return ;
	y_b = 1;
	while (y_b <= y)
	{
		x_a = 1;
		while (x_a <= x)
		{
			if (x_a == 1 && (y_b == 1 || y_b == y))
				ft_putchar('A');
			else if (x_a == x && (y_b == 1 || y_b == y))
				ft_putchar('C');
			else if ((x_a > 1 && x_a < x) && (y_b > 1 && y_b < y))
				ft_putchar(' ');
			else
				ft_putchar('B');
			x_a++;
		}
		ft_putchar('\n');
		y_b++;
	}
}
