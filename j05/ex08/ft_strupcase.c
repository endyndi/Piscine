/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elesueur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 15:07:27 by elesueur          #+#    #+#             */
/*   Updated: 2017/03/23 17:37:39 by elesueur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strupcase(char *str)
{
	int  i;

	i = 0;
	while (str[i] != '\0')
	{
		if  (str[i] == ' ' ||  str[i] <= 97 || str[i] >= 122 )
		{
			i++;
		}
		str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

int		main()
{
	int i;
	i = 0;
	char str[] = "bon/jo;ur je suis un boloss";
	printf("le mien: %s", ft_strupcase(str));
}

