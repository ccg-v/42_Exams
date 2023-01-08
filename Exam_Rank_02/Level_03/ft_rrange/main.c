#include <stdlib.h>
#include <stdio.h>

int	ft_absolute_value(int n);
int	*ft_rrange(int start, int end);


int	main(int argc, char **argv)
{
	int	i;
	int	size;
	int	start;
	int	end;
	int	*tab;

	if (argc == 3)
	{
		start = atoi(argv[1]);
		end = atoi(argv[2]);
		size = 1 + ft_absolute_value(start - end);
		tab = ft_rrange(start, end);
		i = 0;
		printf("{ ");
		while (i < size)
		{
			printf("%d ", tab[i]);
			i++;
		}
		printf("}");
	}
	else
		printf("This function needs two parameters, the start and the end of the int array!");
	printf("\n");
	return (0);
}
