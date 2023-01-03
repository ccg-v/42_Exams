#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_list_foreach(t_list *begin_list, void (*f)(void *));

void	ft_increaseten(void *n) // OJO La funcion NO es un puntero
{	
	*(int *)n = *(int *)n * 10; // Se puede sintetizar aún más: *(int *)n *= 10;
}

void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%d ", *(int *)lst->data);
		lst = lst->next;
	}
}

int	main(void)
{
	int	a = 1;
	int	b = 2;
	int	c = 3;

	t_list	*a_node = malloc(sizeof(t_list));
	t_list	*b_node = malloc(sizeof(t_list));
	t_list	*c_node = malloc(sizeof(t_list));

	a_node->next = b_node;
	b_node->next = c_node;
	c_node->next = 0;

	a_node->data = &a;
	b_node->data = &b;
	c_node->data = &c;

	t_list *lst;
	lst = a_node;

	print_list(lst);
	printf("\n----------\n");
	ft_list_foreach(a_node, ft_increaseten);
	print_list(lst);
	printf("\n");
}
