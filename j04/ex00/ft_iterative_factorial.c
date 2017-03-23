/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elesueur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 09:40:17 by elesueur          #+#    #+#             */
/*   Updated: 2017/03/23 09:03:35 by elesueur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int resultat;
	int i;

	i = nb - 1;
	resultat = nb;
	while (i > 1)
	{
		resultat *= i;
		i--;
	}
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	if (nb < 0 || nb >= 13)
	{
		return (0);
	}
	return (resultat);
}
