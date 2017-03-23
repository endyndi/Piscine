/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elesueur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 15:03:31 by elesueur          #+#    #+#             */
/*   Updated: 2017/03/23 09:07:44 by elesueur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int resultat;
	int i;

	resultat = nb;
	while (power > 1)
	{
		resultat *= nb;
		power--;
	}
	if (power <= 0)
	{
		return (0);
	}
	if ( power == 1)
	{
		return (nb);
	}
	return (resultat);
}
