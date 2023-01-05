#include <stdlib.h>
#include <stdio.h>

int ft_tab_len(int start, int end);
int	*ft_range(int start, int end);

int	main(int argc, char **argv)
{
	int	start;
	int	end;
	int *tab;
	int	len;
	int	i;

	if (argc == 3)
	{
		start = atoi(argv[1]);
		end = atoi(argv[2]);
		tab = ft_range(start, end);
		len = ft_tab_len(start, end);
		i = 0;
		printf("tab = { ");
		while (i < len)
		{
			printf("%d ", tab[i]);
			i++;
		}
		printf("}\n");
	}
	else
		printf("The function needs two parameters, the start and end values of the int array");
	return(0);
}
