/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elesueur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 14:38:28 by elesueur          #+#    #+#             */
/*   Updated: 2017/03/21 17:07:43 by elesueur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_putchar(char *str)
{
	write(1, &c, 1)
}

void	ft_putstr(char str*)
{
	char c;

	while (str[c] != '\0')
	{
		ft_putchar(str[c]);
		c++;
	}
}
