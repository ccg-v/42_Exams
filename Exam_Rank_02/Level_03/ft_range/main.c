#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int start, int end);
int	ft_absolute_value(int n);

int	main(int argc, char **argv)
{
	int	start;
	int	end;
	int	*tab;
	int	size;
	int	i;

	if (argc == 3)
	{
		start = atoi(argv[1]);
		end = atoi(argv[2]);
		tab = ft_range(start, end);
		size = 1 + ft_absolute_value(start - end);
		printf("{ ");
		while (i < size)
		{
			printf("%d ", tab[i]);
			i++;
		}
		printf("}");
	}
	else
		printf("This function needs two parameters, the start and end values of the int array to display!");
	printf("\n");
}
