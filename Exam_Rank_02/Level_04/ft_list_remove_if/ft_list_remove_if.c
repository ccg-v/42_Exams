/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrace <ccarrace@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 20:35:39 by ccarrace          #+#    #+#             */
/*   Updated: 2023/01/03 23:01:45 by ccarrace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*lst;

	if (begin_list == NULL || *begin_list == NULL)
		return ;
	lst = *begin_list;
	if (cmp(lst->data, data_ref) == 0)
	{
		*begin_list = lst->next;
		free(lst);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	lst = *begin_list;
	ft_list_remove_if(&lst->next, data_ref, cmp);
}
