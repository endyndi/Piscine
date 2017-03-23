/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elesueur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 14:09:35 by elesueur          #+#    #+#             */
/*   Updated: 2017/03/20 15:03:01 by elesueur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
	int i;

	i = 0;
	nb = i
if (nb == 0)
{
	return (1);
}
if (nb < 0 || >= 13)
{
	return (0);
}

else
{
	i = nb * ft_recursive_factorial(nb - 1);
	return (i);
}
