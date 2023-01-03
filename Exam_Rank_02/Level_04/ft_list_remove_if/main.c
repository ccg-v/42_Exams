#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());

void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%s ", lst->data);
		lst = lst->next;
	}
}

int	main(void)
{
	char	a[7] = "Should";
	char	b[8] = "display";
	char	c[5] = "only";
	char	d[6] = "12345";
	char	e[6] = "words";
	char	data_ref[6] = "12345";

	t_list	*a_node = malloc(sizeof(t_list));
	t_list	*b_node = malloc(sizeof(t_list));
	t_list	*c_node = malloc(sizeof(t_list));
	t_list	*d_node = malloc(sizeof(t_list));
	t_list	*e_node = malloc(sizeof(t_list));

	a_node->data = a;
	b_node->data = b;
	c_node->data = c;
	d_node->data = d;
	e_node->data = e;

	a_node->next = b_node;
	b_node->next = c_node;
	c_node->next = d_node;
	d_node->next = e_node;
	e_node->next = 0;

	t_list	*lst;
	lst = a_node;

	print_list(lst);
	printf("\n-------------------------------\n");
	ft_list_remove_if(&lst, data_ref, strcmp);
	print_list(lst);
	printf("\n");
	return (0);
}
