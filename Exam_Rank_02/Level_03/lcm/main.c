#include <stdio.h>
#include <stdlib.h>

unsigned int	lcm(unsigned int a, unsigned int b);

int	main(int argc, char **argv)
{
	int	nbr1;
	int	nbr2;

	if (argc == 3)
	{
		nbr1 = atoi(argv[1]);
		nbr2 = atoi(argv[2]);
		printf("lowest common multiple of %d and %d is %d", nbr1, nbr2, lcm(nbr1, nbr2));
	}
	else
		printf("Need two unsigned ints as parameters to calculate their lcm!");
	printf("\n");
	return (0);
}
