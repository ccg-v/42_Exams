/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrace <ccarrace@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 20:57:34 by ccarrace          #+#    #+#             */
/*   Updated: 2022/10/18 21:33:16 by ccarrace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	nbr1;
	char	operator;
	int	nbr2;
	int	result;

	if (argc == 4)
	{
		nbr1 = atoi(argv[1]);
		operator = argv[2][0];
		nbr2 = atoi(argv[3]);

		if (operator == '+')
			result = nbr1 + nbr2;
		if (operator == '-')
			result = nbr1 - nbr2;
		if (operator == '*')
			result = nbr1 * nbr2;
		if (operator == '/')
			result = nbr1 / nbr2;
		if (operator == '%')
			result = nbr1 % nbr2;
		printf("%d", result);
	}
	printf("\n");
	return(0);
}
