/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cols.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djareno <djareno@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 18:02:57 by djareno           #+#    #+#             */
/*   Updated: 2025/03/02 18:03:00 by djareno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_cerocolreturn(int hay1, int hay2, int hay3, int hay4)
{
	if (hay1 != 1)
		return ('1');
	if (hay2 != 1)
		return ('2');
	if (hay3 != 1)
		return ('3');
	if (hay4 != 1)
		return ('4');
	return (0);
}

char	ft_rellenarcerocol(char matriz[][4], int y)
{
	int	x;
	int	hay1;
	int	hay2;
	int	hay3;
	int	hay4;

	x = 0;
	hay1 = 0;
	hay2 = 0;
	hay3 = 0;
	hay4 = 0;
	while (x < 4)
	{
		if (matriz[x][y] == '1')
			hay1 = 1;
		else if (matriz[x][y] == '2')
			hay2 = 1;
		else if (matriz[x][y] == '3')
			hay3 = 1;
		else if (matriz[x][y] == '4')
			hay4 = 1;
		x++;
	}
	return (ft_cerocolreturn(hay1, hay2, hay3, hay4));
}

void	ft_rellenarcolumnascero(char matriz[][4])
{
	int	y;
	int	x;
	int	cont0;
	int	x0;

	y = 0;
	while (y < 4)
	{
		x = 0;
		cont0 = 0;
		while (x < 4)
		{
			if (matriz[x][y] == '0')
			{
				cont0++;
				x0 = x;
			}
			x++;
		}
		if (cont0 == 1)
			matriz[x0][y] = ft_rellenarcerocol(matriz, y);
		y++;
	}
}
