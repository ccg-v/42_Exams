/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrace <ccarrace@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 22:55:29 by ccarrace          #+#    #+#             */
/*   Updated: 2022/12/05 23:38:22 by ccarrace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *s)
{
	int	nbr;

	nbr = 0;
	while (*s)
	{
		nbr = (nbr * 10) + (*s - '0');
		s++;
	}
	return (nbr);
}

void	ft_puthex(int nbr)
{
	char	c;

	if (nbr > 15)
		ft_puthex(nbr / 16);
	if ((nbr % 16) >= 0 && (nbr % 16) <= 9)
		c = (nbr % 16) + '0';
	else if ((nbr % 16) >= 10 && (nbr % 16) <= 15)
		c = (nbr % 16) + 'a' - 10;
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	nbr;

	if (argc == 2)
	{
		nbr = ft_atoi(argv[1]);
		ft_puthex(nbr);
	}
	write(1, "\n", 1);
	return (0);
}
