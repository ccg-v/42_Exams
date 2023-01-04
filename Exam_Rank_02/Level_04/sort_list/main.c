#include "list.h"
#include <stdlib.h>
#include <stdio.h>

t_list	*sort_list(t_list* lst, int (*cmp)(int, int));

void	print_list(t_list* lst)
{
	while(lst)
	{
		printf("%d ", lst->data);
		lst = lst->next;
	}
	printf("\n");
}

int	ascending(int a, int b)
{
	return(a <= b);
}

int	main(void)
{
	int	a = 32;
	int	b = 8;
	int	c = 16;
	int	d = 2;
	int	e = 4;
	
	t_list	*a_node = malloc(sizeof(t_list));
	t_list	*b_node = malloc(sizeof(t_list));
	t_list	*c_node = malloc(sizeof(t_list));
	t_list	*d_node = malloc(sizeof(t_list));
	t_list	*e_node = malloc(sizeof(t_list));

	a_node->next = b_node;
	b_node->next = c_node;
	c_node->next = d_node;
	d_node->next = e_node;
	e_node->next = 0;

	a_node->data = a;
	b_node->data = b;
	c_node->data = c;
	d_node->data = d;
	e_node->data = e;

	t_list*	current;
	current = a_node;
	print_list(current);
	printf("----------------\n");
	sort_list(current, ascending);
	print_list(current);
}
