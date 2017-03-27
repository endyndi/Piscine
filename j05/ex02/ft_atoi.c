/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elesueur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 17:08:35 by elesueur          #+#    #+#             */
/*   Updated: 2017/03/21 17:22:54 by elesueur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *str)
{
	int i;
	int nb;
	char signe;
	while (str[i] != '/0' || str[i] <= 13 || str[i] == ' ')
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
		nb = 0;
		nb *= 10;
		nb += str[i] - '0';
		i++;
	}
	if (signe == 1)
	{
		return (-nb);
	}
	else
	{
		return (nb);
	}
