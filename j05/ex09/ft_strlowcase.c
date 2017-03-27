/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elesueur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 17:29:47 by elesueur          #+#    #+#             */
/*   Updated: 2017/03/23 17:53:25 by elesueur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strlowcase(char *str)
{
	int a;

	a = 0;
	while ( str[a] != '\0')
{
	while (str[a] == ' ' || str[a] < 65 || str[a] > 90)
	{
		a++;
	}
	str[a] = str[a] + 32;
	a++;
}
	return (str);
}

int main()
{
	int a;
	a = 0;
	char str[] = " SALUT ViCTOR EST un BOLOSS";
	printf("La verite : %s", ft_strlowcase(str));
}
