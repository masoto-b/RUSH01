/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masoto-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 18:00:18 by masoto-b          #+#    #+#             */
/*   Updated: 2025/03/13 15:01:01 by masoto-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
/*
int	main(void)
{
	char	src[14] = "primer string";
	char	dest[7] = "prueba";

	printf("%s\n", dest);
	ft_strcpy(dest, src);
	printf("%s", dest);
	return (0);
}*/
