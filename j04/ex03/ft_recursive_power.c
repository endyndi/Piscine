/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elesueur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 18:27:52 by elesueur          #+#    #+#             */
/*   Updated: 2017/03/20 19:11:22 by elesueur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int resultat;

	resultat = nb;
	if (power < 0)
	{
		return (0);
	}
	if (power > 1)
	{
		resultat = nb * ft_recursive_power(nb, power - 1);
	}
	return (resultat);
}
