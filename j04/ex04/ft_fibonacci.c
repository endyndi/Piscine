/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elesueur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 19:12:36 by elesueur          #+#    #+#             */
/*   Updated: 2017/03/21 08:23:18 by elesueur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
	if (index < 0)
{
	return (-1);
}
if ( index == 0)
{
	return (0);
}
if ( index == 1)
{
	return(1);
}
if (index > 1)
{
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
}
