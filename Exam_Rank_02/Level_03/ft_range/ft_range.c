/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrace <ccarrace@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:46:07 by ccarrace          #+#    #+#             */
/*   Updated: 2023/01/06 00:09:23 by ccarrace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_tab_len(int start, int end)
{
	int	len;

	len = 0;
	if (start < end)
		len = end - start + 1;
	else
		len = start - end + 1;
	return (len);
}

int	*ft_range(int start, int end)
{
	int	*tab;
	int	len;
	int	i;

	i = 0;
	len = ft_tab_len(start, end);
	tab = (int *)malloc(len * sizeof(int));
	if (!tab)
		return (NULL);
	while (i < len)
	{
		tab[i] = start;
		if (start < end)
			start++;
		else
			start--;
		i++;
	}
	return (tab);
}
