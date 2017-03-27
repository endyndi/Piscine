/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elesueur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 13:13:38 by elesueur          #+#    #+#             */
/*   Updated: 2017/03/23 15:04:05 by elesueur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1,char *s2,  unsigned int n)
{
	int c;

	c = 0;
	n = 5;
	while (s1[c] && c < n)
	{
		if (s1[c] != s2[c] && c < n)
		{
			return (s1[c] - s2[c]);
		}
				c++;
	}
	return (0);
}
int		main()
{
	int n;
	n = 5;
	char s1[] = "iiiii";
	char s2[] = "i";
	printf("mien %d\n", ft_strncmp(s1,s2,n));
	printf("vrai %d", strncmp(s1,s2,n));
}
