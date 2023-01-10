/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrace <ccarrace@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 20:25:02 by ccarrace          #+#    #+#             */
/*   Updated: 2022/12/19 23:19:50 by ccarrace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Solved using bitwise operators
// A way to know if a number is power of two, is applying an AND mask of that
// number minus 1. If its power of two, the result will always be 0.
//
// Remember 1 is power of two (the first power). 0 is not.

int	is_power_of_2(unsigned int n)
{
	if (n > 0 && (n & (n - 1)) == 0)	// n > 0 because 0 is not power of 2
		return (1);		
	return (0);
}

/* Another version, this time solved arithmetically

int	is_power_of_2(unsigned int n)
{
	unsigned int	i;

	i = 2;
	while (i <= n)
	{
		if (i == n)
			return (1);
		n = n * 2;
	}
	return (0);
}

*/

