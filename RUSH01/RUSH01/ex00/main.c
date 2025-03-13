/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djareno <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 10:44:08 by djareno           #+#    #+#             */
/*   Updated: 2025/03/01 23:27:00 by djareno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_validarguments(int argc, char *args[], char *arr);
void	ft_puterror(char *str);
void	rush01(char *arr);

void	ft_argtoarr(char *args[], char *arr)
{
	int	x;

	x = 0;
	while (args[1][x] != '\0')
	{
		if (args[1][x] > '0' && args[1][x] < '5')
		{
			arr[x / 2] = args[1][x];
		}
		x++;
	}
	arr[x] = '\0';
}

int	main(int argc, char *args[])
{
	char	argarr[16];

	if (argc != 2)
	{
		ft_puterror("Error");
		return (1);
	}
	ft_argtoarr(args, argarr);
	if (ft_validarguments(argc, args, argarr) == 1)
	{
		ft_puterror("Error");
		return (1);
	}
	ft_argtoarr(args, argarr);
	rush01(argarr);
	return (0);
}
