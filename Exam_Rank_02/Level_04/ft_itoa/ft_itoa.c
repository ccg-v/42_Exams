/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrace <ccarrace@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 19:07:39 by ccarrace          #+#    #+#             */
/*   Updated: 2023/01/03 20:28:10 by ccarrace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <limits.h>

static int	ft_nbrlen(int nbr)
{
	int	len;

	len = 0;
	if (nbr < 0)
		len++;
	while (nbr)	// OJO con poner (nbr > 0) porque un valor negativo
	{		// no entra en el bucle
		len++;
		nbr = nbr / 10;
	}
	return(len);
}

char	*ft_itoa(int nbr)
{
	char *str;
	int	i;
	
	if (nbr == INT_MIN)
		return ("-2147483648");
	i = ft_nbrlen(nbr);
	str = malloc((sizeof(char) * ft_nbrlen(nbr)) + 1);
	if (!str)
		return(NULL);
	str[ft_nbrlen(nbr)] = '\0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= (-1);
	}
	else if (nbr == 0)	// OJO con el valor 0, que se interpreta
		str[0] = '0';	// como el fin del string
	while (nbr)	// OJO con poner (nbr > 0) porque un valor negativo
	{		// no entra en el bucle
		i--;
		str[i] = nbr % 10 + '0';
		nbr /= 10;
	}
	return(str);
}
