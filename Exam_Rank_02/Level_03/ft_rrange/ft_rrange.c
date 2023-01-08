/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrace <ccarrace@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:37:22 by ccarrace          #+#    #+#             */
/*   Updated: 2022/11/04 21:07:25 by ccarrace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_absolute_value(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int	*ft_rrange(int	start, int end)
{
	int	i;
	int	size;
	int	*tab;

	i = 0;
	size = 1 + ft_absolute_value(end - start);
	tab = (int *)malloc(size * sizeof(int));
	if (!tab)
		return (NULL);
	while (i < size)
	{
		tab[i] = end;
		if (end > start)
			end--;
		else
			end++;
		i++;
	}
	return (tab);
}
