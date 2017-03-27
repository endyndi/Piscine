/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elesueur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 06:47:51 by elesueur          #+#    #+#             */
/*   Updated: 2017/03/27 08:25:21 by elesueur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int a;
	int caractere;

	caractere = 0;
	a = 0;
	while (dest[caractere] != '\0')
	{
		caractere++;
		a++;
	}
	if  (src[a] != '\0')
	{
		dest[caractere] = src[a];
		a++;
		caractere++;;
	}
	dest[caractere] = '\0';
		return (dest);
}
int		main()
{
	char mot [25] = "Salut ca va ?";
	char mot2[25] = "Endy";

	printf("le mien :%s\n", ft_strcat(mot,mot2));
	printf("le mien :%c\n", mot2[21]);
	printf("le vrai: %s", strcat(mot,mot2));
}
