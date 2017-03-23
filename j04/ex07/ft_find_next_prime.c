/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elesueur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 11:10:54 by elesueur          #+#    #+#             */
/*   Updated: 2017/03/21 12:30:52 by elesueur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}
