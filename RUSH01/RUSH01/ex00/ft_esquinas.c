/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_esquinas.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djareno <djareno@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 17:31:42 by djareno           #+#    #+#             */
/*   Updated: 2025/03/02 17:47:09 by djareno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_filasup(char matriz[][4], char *arr, char a, char *opt);
void	ft_filasdown(char matriz[][4], char *arr, char a, char *opt);
void	ft_filasleft(char matriz[][4], char *arr, char a, char *opt);
void	ft_filasright(char matriz[][4], char *arr, char a, char *opt);

void	ft_colocaresquinas(char matriz[][4], char *arr, int *esq, int *mat)
{
	if (arr[esq[0]] == '3' && arr[esq[1]] == '3')
		matriz[mat[0]][mat[1]] = '2';
	if (arr[esq[0]] == '2' && arr[esq[1]] == '3')
		matriz[mat[0]][mat[1]] = '2';
	if (arr[esq[0]] == '3' && arr[esq[1]] == '2')
		matriz[mat[0]][mat[1]] = '2';
	if (arr[esq[0]] == '2' && arr[esq[1]] == '2')
		matriz[mat[0]][mat[1]] = '3';
}

void	ft_esquina2(char matriz[][4], char *arr)
{
	int	esq3[2];
	int	esq4[2];
	int	mat3[2];
	int	mat4[2];

	esq3[0] = 4;
	esq3[1] = 11;
	mat3[0] = 3;
	mat3[1] = 0;
	esq4[0] = 15;
	esq4[1] = 7;
	mat4[0] = 3;
	mat4[1] = 3;
	ft_colocaresquinas(matriz, arr, esq3, mat3);
	ft_colocaresquinas(matriz, arr, esq4, mat4);
}

void	ft_esquina(char matriz[][4], char *arr)
{
	int	esq1[2];
	int	esq2[2];
	int	mat1[2];
	int	mat2[2];

	esq1[0] = 0;
	esq1[1] = 7;
	mat1[0] = 0;
	mat1[1] = 0;
	esq2[0] = 3;
	esq2[1] = 12;
	mat2[0] = 0;
	mat2[1] = 3;
	ft_colocaresquinas(matriz, arr, esq1, mat1);
	ft_colocaresquinas(matriz, arr, esq2, mat2);
	ft_esquina2(matriz, arr);
}

void	ft_colocartres(char matriz[][4], char *arr)
{
	char	opt[4];

	opt[0] = '2';
	opt[1] = '3';
	opt[2] = '4';
	opt[3] = '1';
	ft_filasup(matriz, arr, '3', opt);
	ft_filasdown(matriz, arr, '3', opt);
	ft_filasleft(matriz, arr, '3', opt);
	ft_filasright(matriz, arr, '3', opt);
}

void	ft_esquinas(char matriz[][4], char *arr)
{
	ft_esquina(matriz, arr);
	ft_colocartres(matriz, arr);
}
