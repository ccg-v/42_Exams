#include <stdio.h>

void	sort_int_tab(int *tab, unsigned int size);

void	print_tab(int *tab, unsigned int size)
{
	unsigned int	i = 0;

	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
}
int	main(void)
{
	int		tab[10] = {3, 8, 1, 2, 4, 6, -23, 1, 4, 101};
	unsigned int	size = 10;

	printf("Original tab = { ");
	print_tab(tab, size);
	printf("}\n");

	sort_int_tab(tab, size);
	printf("Sorted tab   = { ");
	print_tab(tab, size);
	printf("}\n");
	return(0);
}
