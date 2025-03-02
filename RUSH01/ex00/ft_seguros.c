/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_seguros.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djareno <djareno@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 17:23:20 by djareno           #+#    #+#             */
/*   Updated: 2025/03/02 17:48:46 by djareno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_comprobarvacio(char matriz[][4], int x, int y);

void	ft_filasleft(char matriz[][4], char *arr, char comp, char *opt)
{
	int	x;
	int	i;

	x = 0;
	i = 8;
	while (i < 12)
	{
		if (arr[i] == comp)
		{
			if (ft_comprobarvacio(matriz, x, 0) == 0)
				matriz[x][0] = opt[0];
			if (ft_comprobarvacio(matriz, x, 1) == 0)
				matriz[x][1] = opt[1];
			if (ft_comprobarvacio(matriz, x, 2) == 0)
				matriz[x][2] = opt[2];
			if (ft_comprobarvacio(matriz, x, 3) == 0)
				matriz[x][3] = opt[3];
		}
		x++;
		i++;
	}
}

void	ft_filasright(char matriz[][4], char *arr, char comp, char *opt)
{
	int	x;
	int	i;

	x = 0;
	i = 12;
	while (i < 15)
	{
		if (arr[i] == comp)
		{
			if (ft_comprobarvacio(matriz, x, 3) == 0)
				matriz[x][3] = opt[0];
			if (ft_comprobarvacio(matriz, x, 2) == 0)
				matriz[x][2] = opt[1];
			if (ft_comprobarvacio(matriz, x, 1) == 0)
				matriz[x][1] = opt[2];
			if (ft_comprobarvacio(matriz, x, 0) == 0)
				matriz[x][0] = opt[3];
		}
		x++;
		i++;
	}
}

void	ft_filasup(char matriz[][4], char *arr, char comp, char *opt)
{
	int	y;
	int	i;

	y = 0;
	i = 0;
	while (i < 4)
	{
		if (arr[i] == comp)
		{
			if (ft_comprobarvacio(matriz, 0, y) == 0)
				matriz[0][y] = opt[0];
			if (ft_comprobarvacio(matriz, 1, y) == 0)
				matriz[1][y] = opt[1];
			if (ft_comprobarvacio(matriz, 2, y) == 0)
				matriz[2][y] = opt[2];
			if (ft_comprobarvacio(matriz, 3, y) == 0)
				matriz[3][y] = opt[3];
		}
		y++;
		i++;
	}
}

void	ft_filasdown(char matriz[][4], char *arr, char comp, char *opt)
{
	int	y;
	int	i;

	y = 0;
	i = 4;
	while (i < 7)
	{
		if (arr[i] == comp)
		{
			if (ft_comprobarvacio(matriz, 3, y) == 0)
				matriz[3][y] = opt[0];
			if (ft_comprobarvacio(matriz, 2, y) == 0)
				matriz[2][y] = opt[1];
			if (ft_comprobarvacio(matriz, 1, y) == 0)
				matriz[1][y] = opt[2];
			if (ft_comprobarvacio(matriz, 0, y) == 0)
				matriz[0][y] = opt[3];
		}
		y++;
		i++;
	}
}

void	ft_seguros(char matriz[][4], char *arr)
{
	char	opt1[4];
	char	opt2[4];

	opt1[0] = '1';
	opt1[1] = '2';
	opt1[2] = '3';
	opt1[3] = '4';
	opt2[0] = '4';
	opt2[1] = '0';
	opt2[2] = '0';
	opt2[3] = '0';
	ft_filasup(matriz, arr, '4', opt1);
	ft_filasup(matriz, arr, '1', opt2);
	ft_filasdown(matriz, arr, '4', opt1);
	ft_filasdown(matriz, arr, '1', opt2);
	ft_filasleft(matriz, arr, '4', opt1);
	ft_filasleft(matriz, arr, '1', opt2);
	ft_filasright(matriz, arr, '4', opt1);
	ft_filasright(matriz, arr, '1', opt2);
}
