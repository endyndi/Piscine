/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elesueur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 11:03:22 by elesueur          #+#    #+#             */
/*   Updated: 2017/03/26 16:46:56 by elesueur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2)
{
	int c;

	c = 0;
	while (s1[c] != '\0' || s2[c] != '\0')
	{
		if (s1[c] != s2[c])
		{
			return (s1[c] - s2[c]);
		}
		c++;
	}
	return (0);
}

int		main()
{
	char s1[] = "Salut Salut Salut";
	char s2[] = "Salut Sakd/" ;
	printf("mien: %d\n" ,ft_strcmp(s1, s2));
	printf("vrai: %d",strcmp(s1,s2));
}
