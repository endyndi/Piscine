/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elesueur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/26 13:19:50 by elesueur          #+#    #+#             */
/*   Updated: 2017/03/26 19:05:54 by elesueur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_str_is_alpha.c
{
	int a;

	a = 0;
	while (str[a])
	{
		if ((str[a] >= 65 && str[a] <= 90) ||
				(str[a] >= 97 && str[a] <= 122))
		{
			return (1);
		}
		if (str[a] < 65 || (str[a] > 90 && str[a] < 97) || str[a] > 122)
		{
			return (0);
		}
		else
		{
			return (1);
		}
	a++;
	}
}

