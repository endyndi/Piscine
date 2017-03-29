/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elesueur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 10:48:45 by elesueur          #+#    #+#             */
/*   Updated: 2017/03/28 21:13:42 by elesueur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		ft_putchar(str[a]);
		a++;
	}
}

int		main(int argc, char **argv)
{
	int a;

	a = 1;
	while (argc > a)
	{
		ft_putstr(argv[argc - a]);
		ft_putchar('\n');
		a++;
	}
	return (0);
}
