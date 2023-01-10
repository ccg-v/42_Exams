/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrace <ccarrace@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 22:02:01 by ccarrace          #+#    #+#             */
/*   Updated: 2022/11/03 19:25:54 by ccarrace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Remember:
// - skip previous blank spaces
// - handle the sign
// - stop the function and return the result if a non numeric character is 
//	found in the string

int	ft_atoi(const char *str)
{
	int	nbr;
	int	sign;

	nbr = 0;
	sign = 1;
	
	if (*str == '-')
	{
		str++;
		sign = -1;
	}
	while (*str == ' ' || *str == '\t')
		str++;
	while (*str >= '0' && *str <= '9')
	{	
		nbr = (nbr * 10) + *str - '0';
		str++;
	}
	return (nbr * sign);
}
