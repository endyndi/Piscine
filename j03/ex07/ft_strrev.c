/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elesueur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 11:36:05 by elesueur          #+#    #+#             */
/*   Updated: 2017/03/23 08:58:40 by elesueur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strrev(char *str)
{
	int a;
	int b;
	char c;

	a = -1;
	b = 0;
	while (str[b] != '\0')
	{
		b++;
	}
	while (a++ < --b)
	{
		c = str[a];
		str[a] = str[b];
		str[b] = c;
	}
	return (str);
}
