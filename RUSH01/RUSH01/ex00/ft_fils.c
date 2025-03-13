/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fils.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djareno <djareno@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 18:04:31 by djareno           #+#    #+#             */
/*   Updated: 2025/03/02 18:04:50 by djareno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_cerofilareturn(int hay1, int hay2, int hay3, int hay4)
{
	if (hay1 != 1)
		return ('1');
	if (hay2 != 1)
		return ('2');
	if (hay3 != 1)
		return ('3');
	if (hay4 != 1)
		return ('4');
	return ('0');
}

char	ft_rellenarcerofil(char matriz[][4], int x)
{
	int	y;
	int	hay1;
	int	hay2;
	int	hay3;
	int	hay4;

	hay1 = 0;
	hay2 = 0;
	hay3 = 0;
	hay4 = 0;
	y = -1;
	while (y++ < 4)
	{
		if (matriz[x][y] == '1')
			hay1 = 1;
		else if (matriz[x][y] == '2')
			hay2 = 1;
		else if (matriz[x][y] == '3')
			hay3 = 1;
		else if (matriz[x][y] == '4')
			hay4 = 1;
	}
	return (ft_cerofilareturn(hay1, hay2, hay3, hay4));
}

void	ft_rellenarfilascero(char matriz[][4])
{
	int	x;
	int	y;
	int	cont0;
	int	y0;

	x = 0;
	while (x < 4)
	{
		y = 0;
		cont0 = 0;
		while (y < 4)
		{
			if (matriz[x][y] == '0')
			{
				cont0++;
				y0 = y;
			}
			y++;
		}
		if (cont0 == 1)
		{
			matriz[x][y0] = ft_rellenarcerofil(matriz, x);
		}
		x++;
	}
}
