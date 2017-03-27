/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elesueur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 15:03:31 by elesueur          #+#    #+#             */
/*   Updated: 2017/03/23 11:28:08 by elesueur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int resultat;
	int i;

	resultat = nb;

	if (power <= 0)
	{
		return (0);
	}
	if ( power == 1)
	{
		return (nb);
	}
	while (power > 1)
	{
		resultat *= nb;
		power--;
	}
	return (resultat);
}
