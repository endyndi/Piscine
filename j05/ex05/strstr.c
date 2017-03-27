/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elesueur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 18:36:03 by elesueur          #+#    #+#             */
/*   Updated: 2017/03/22 20:56:30 by elesueur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
char *ft_strstr(char *str, char *to_find)
{
	int a;
	int b;

	a = 0;
	b = 0;

	while (str[a] != '\0')
	{
		b = 0;
		while (str[a + b] == to_find[b] && to_find[b])
		{
			b++;
			if  (to_find[b]  == '\0')
			{
				return (str + a);
			}
		}
		a++;
	}
}
int main ()
{
	char str[] = "Kiss my ass and enjoy";
	char to_find[] ="and";
	printf("Mine %s\n", ft_strstr(str, to_find));
	printf("Real %s", strstr(str, to_find));
	return(0);
}
