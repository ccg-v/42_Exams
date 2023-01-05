#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_list_size(t_list *begin_list);

int	main(void)
{
	t_list *a_node = malloc(sizeof(t_list));
	t_list *b_node = malloc(sizeof(t_list));
	t_list *c_node = malloc(sizeof(t_list));
	t_list *d_node = malloc(sizeof(t_list));

	a_node->next = b_node;
	b_node->next = c_node;
	c_node->next = d_node;
	d_node->next = 0;

	t_list	*lst;
	lst = a_node;

	printf("Size of list is %d\n", ft_list_size(lst));
}
