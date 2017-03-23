/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elesueur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 08:44:18 by elesueur          #+#    #+#             */
/*   Updated: 2017/03/23 09:01:02 by elesueur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int ft_atoi(char *str)
{
	int i;
	int nb;
	char signe;

	nb = 0;
	while (str[i] != '/0' && ( str[i] <= 13 || str[i] == ' '))
	{
		i++;
	}
	if (signe == '+' || signe == '-')
	{
		if (signe == '-')
		{
			signe = 1;
		}
		i++;
	}
	while (nb >= '0' && nb <= '9')
	{
		nb *= 10;
		nb += str[i] - '0';
		i++;
	}
	if ( signe == 1)
	{
		return (-nb);
	}
	else
	{
		return (nb);
	}


