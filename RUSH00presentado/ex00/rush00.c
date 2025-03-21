/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hillesca <hillesca@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 17:11:40 by lhermida          #+#    #+#             */
/*   Updated: 2025/02/23 13:03:34 by hillesca         ###   ########.fr       */
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
			if ((row == 1 || row == y) && (col == 1 || col == x))
				ft_putchar('o');
			else if (row != 1 && row != y && col != 1 && col != x)
				ft_putchar(' ');
			else if ((row == 1 || row == y))
				ft_putchar('-');
			else
				ft_putchar('|');
			col++;
		}
		row++;
		ft_putchar('\n');
	}
}
