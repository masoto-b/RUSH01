/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hillesca <hillesca@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 17:11:40 by lhermida          #+#    #+#             */
/*   Updated: 2025/02/23 19:06:22 by hillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	row;
	int	col;

	row = 1;
	while (row <= y && x > 0)
	{
		col = 1;
		while (col <= x)
		{
			if ((row == 1 && col == 1) || (row == y && col == x))
				ft_putchar('A');
			else if ((row == y && col == 1) || (row == 1 && col == x))
				ft_putchar('C');
			else if (row != 1 && row != y && col != 1 && col != x)
				ft_putchar(' ');
			else
				ft_putchar('B');
			col++;
		}
		row++;
		ft_putchar('\n');
	}
}
