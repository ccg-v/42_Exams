#include <stdio.h>

int	max(int	*tab, unsigned int len);

void	print_tab(int *tab, unsigned int len)
{
	unsigned int	i;

	i = 0;
	printf("tab = { ");
	while (i < len)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf(" }\n");
}

int	main(void)
{
	int	tab[8] = {5, 2, 10, 7, 3, 1, 4, 6};
	unsigned int	len = 8;

	print_tab(tab, len);
	printf("Max value of tab is %d\n", max(tab, len));

}
