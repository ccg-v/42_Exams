/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrace <ccarrace@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 18:54:41 by ccarrace          #+#    #+#             */
/*   Updated: 2023/01/03 21:27:13 by ccarrace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void*))
{
	while (begin_list)
	{
		f(begin_list->data);
		begin_list = begin_list->next;
	}
}
