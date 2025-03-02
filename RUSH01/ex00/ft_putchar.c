/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djareno <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 10:35:12 by djareno           #+#    #+#             */
/*   Updated: 2025/03/01 19:02:58 by djareno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_error(char c)
{
	write(2, &c, 1);
}

void	ft_puterror(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		ft_error(str[x]);
		x++;
	}
	ft_error('\n');
}
