/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrace <ccarrace@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 10:17:15 by ccarrace          #+#    #+#             */
/*   Updated: 2022/11/22 20:57:14 by ccarrace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isprime(int nbr)
{
	int	i;

	i = 2;
	while (i < nbr)
	{
		if (nbr % i == 0)
			return (0);
		i++;
	}
	return (1);
}

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

void	ft_putnbr(int nbr)
{
	char 	c;

	if (nbr > 9)
		ft_putnbr(nbr / 10);
	c = (nbr % 10) + '0';
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	nbr;
	int	i;
	int	sum;
	
	if (argc == 2 && ft_atoi(argv[1]) > 0)
	{
		nbr = ft_atoi(argv[1]);
		i = 2;
		sum = 0;
		while (i <= nbr)
		{
			if (ft_isprime(i))
				sum = sum + i;
			i++;
		}
		ft_putnbr(sum);
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}
