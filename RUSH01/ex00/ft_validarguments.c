/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validarguments.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djareno <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 12:48:37 by djareno           #+#    #+#             */
/*   Updated: 2025/03/01 23:28:07 by djareno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_validarsuma(char *arr)
{
	int	x;
	int	z;
	int	j;

	j = 0;
	z = 0;
	x = 0;
	while (x <= 11)
	{
		if (!(x > 3 && x < 8))
		{
			j = (int) arr[x + 4];
			z = (int) arr[x];
			if (!(((z + j) - 48) > '2' && ((z + j) - 48) < '6'))
				return (1);
		}
		x++;
	}
	return (0);
}

int	ft_validstring(char *str[])
{
	int	x;
	int	space;

	space = 0;
	x = 0;
	while (str[1][x] != '\0')
	{
		if (space == 0 && (str[1][x] > '0' && str[1][x] < '5'))
		{
			space = 1;
		}
		else if (space == 1 && str[1][x] == ' ')
		{
			space = 0;
		}
		else
			return (1);
		x++;
	}
	if (x == 31)
		return (0);
	return (1);
}

int	ft_validarguments(int argc, char *args[], char *arr)
{
	int	incorrecto;

	incorrecto = 0;
	incorrecto = ft_validstring(args);
	incorrecto = ft_validarsuma(arr);
	return (incorrecto);
}
