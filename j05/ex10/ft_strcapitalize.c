/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elesueur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 17:56:36 by elesueur          #+#    #+#             */
/*   Updated: 2017/03/26 19:06:23 by elesueur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strcapitalize(char *str)
{
	int a;

	a = 0;

	while (str[a] != '\0')
	{
		if  (str[a] > 64 && str[a] < 91)
		{
			str[a] += 32;
		}
		if (str[a] < 123 && str[a] > 96)
		{
			if (str[a - 1] < 48 || (str[a - 1] > 57 && str[a - 1] < 65) || 
					(str[a - 1] > 90 && str[a - 1] < 97) || str[a - 1] > 122||
					str[a - 1] == ' ' || str[a -1] == '+')
			{
				str[a] -= 32;
			}
		}
		a++;
	}
	return (str);
}


int		main()
{
	int a;

	a = 0;
	char str[] = "salut, ComMENt  tu vas ? 42mots quarante-deux; cinquante+et+un 42l4242L2424K ReKT4242 MdR MDr";
	printf("%s", ft_strcapitalize(str));
}
