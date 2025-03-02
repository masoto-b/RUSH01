/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djareno <djareno@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 22:01:25 by djareno           #+#    #+#             */
/*   Updated: 2025/03/02 17:44:30 by djareno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_seguros(char matriz[][4], char *arr);
void	ft_esquinas(char matriz[][4], char *arr);
void	ft_rellenarcolumnascero(char matriz[][4]);
void	ft_rellenarfilascero(char matriz[][4]);

int	ft_comprobarvacio(char matriz[][4], int x, int y)
{
	if (matriz[x][y] == '0')
		return (0);
	return (1);
}

void	ft_inicializarmatriz(char matriz[][4])
{
	int	x;
	int	y;

	x = 0;
	while (x < 4)
	{
		y = 0;
		while (y < 4)
		{
			matriz[x][y] = '0';
			y++;
		}
		x++;
	}
}

void	ft_mostrarmatriz(char matriz[][4])
{
	int	x;
	int	y;

	x = 0;
	while (x < 4)
	{
		y = 0;
		while (y < 4)
		{
			ft_putchar(matriz[x][y]);
			y++;
		}
		ft_putchar('\n');
		x++;
	}
}

void	rush01(char *arr)
{
	char	matriz[4][4];

	ft_inicializarmatriz(matriz);
	ft_seguros(matriz, arr);
	ft_esquinas(matriz, arr);
	ft_rellenarfilascero(matriz);
	ft_rellenarcolumnascero(matriz);
	ft_mostrarmatriz(matriz);
}
