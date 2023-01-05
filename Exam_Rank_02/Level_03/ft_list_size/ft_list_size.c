/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrace <ccarrace@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 21:01:19 by ccarrace          #+#    #+#             */
/*   Updated: 2023/01/05 23:00:37 by ccarrace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int	i;

	i = 0;
	if (begin_list)
	{
		while (begin_list)
		{
			begin_list = begin_list->next;
			i++;
		}
	}
	return (i);
}
