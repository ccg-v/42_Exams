/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrace <ccarrace@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 21:18:09 by ccarrace          #+#    #+#             */
/*   Updated: 2022/12/05 23:00:00 by ccarrace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	nbr1;
	int	nbr2;
	int	n;

	if (argc == 3)
	{
		nbr1 = atoi(argv[1]);
		nbr2 = atoi(argv[2]);
		n = nbr1; 	// it doesn't matter either nbr1 or nbr2
		while (n > 0)
		{
			if ((nbr1 % n == 0) && (nbr2 % n == 0))
			{
				printf("%d\n", n);
				return (0);
			}
			n--;
		}
	}
	printf("\n");
	return (0);
}
