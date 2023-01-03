/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrace <ccarrace@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 23:24:38 by ccarrace          #+#    #+#             */
/*   Updated: 2023/01/03 19:27:17 by ccarrace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	nbr;
	int	i;

	if (argc == 2)
	{
		i = 2;
		nbr = atoi(argv[1]);
		if (nbr == 1)
			printf("%d", 1);
		while ((nbr / i) > 1)
		{
			if ((nbr % i) == 0)
			{
				printf("%d*", i);
				nbr = nbr / i;
			}
			else
				i++;
		}
		if ((nbr / i) == 1)
			printf("%d", nbr);
	}
	printf("\n");
	return(0);
}

/* PREVIOUS SOLUTION (unnecessarily complicated)
 *
 * There is no need to check if i is prime since
 * factorial decomposing is always in prime factors
 *  
 * The result of dividing nbr by i is 1 only if i is
 * the last factor. We can use this as a condition
 * to avoid printing the character '*' before the 
 * last factor, instead of using a flag

#include <stdio.h>
#include <stdlib.h>

int	ft_isprime(int nbr)
{
	int	i;

	i = 2;
	while (i < nbr)
	{
		if ((nbr % i) == 0)
			return(0);
		i++;
	}
	return(1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	nbr;
	int	flag;

	if (argc == 2)
	{
		i = 2;
		flag = 0;
		nbr = atoi(argv[1]);
		if (nbr == 1)
			printf("%d", 1);
		while (nbr > 1)
		{
			if ((nbr % i) == 0 && ft_isprime(i) == 1)
			{	
				if (flag == 0)
				{
					printf("%d", i);
					flag = 1;
				}
				else
					printf("*%d", i);
				nbr = nbr / i;
			}
			else
				i++;
		}
	}
	printf("\n");
	return(0);
}
*/
