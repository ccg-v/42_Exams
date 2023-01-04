/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrace <ccarrace@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 22:33:30 by ccarrace          #+#    #+#             */
/*   Updated: 2022/12/30 23:57:53 by ccarrace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <stddef.h>

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	int	tmp;
	t_list	*current;

	current = lst;
	while (lst && lst->next)
	{
		if (cmp(lst->data, lst->next->data) == 0)
		{
			tmp = lst->data;
			lst->data = lst->next->data;
			lst->next->data = tmp;
			lst = current;
		}
		else
			lst = lst->next;
	}
	lst = current;
	return (lst);
}
