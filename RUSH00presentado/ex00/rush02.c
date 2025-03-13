/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hillesca <hillesca@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 17:11:40 by lhermida          #+#    #+#             */
/*   Updated: 2025/02/23 13:07:37 by hillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	row;
	int	col;

	if (x <= 0 || y <= 0)
		write(1, "Se ha introducido un número inferior a 1 \n", 44);
	else
	{
		row = 0;
		while (row++ < y)
		{
			col = 0;
			while (col++ < x)
			{
				if (row == 1 && (col == 1 || col == x))
					ft_putchar('A');
				else if (row == y && (col == 1 || col == x))
					ft_putchar('C');
				else if (row != 1 && row != y && col != 1 && col != x)
					ft_putchar(' ');
				else
					ft_putchar('B');
			}
			ft_putchar('\n');
		}
	}
}
