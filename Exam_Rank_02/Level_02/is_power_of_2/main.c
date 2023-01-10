#include <stdio.h>
#include <stdlib.h>

int	is_power_of_2(unsigned int n);

int	main(int argc, char **argv)
{
	int	nbr;

	if (argc == 2)
	{
		nbr = atoi(argv[1]);
		if (is_power_of_2(nbr))
			printf("%d is power of 2\n", nbr);
		else
			printf("%d is NOT power of 2\n", nbr);
	}
	else
		printf("Wrong arguments!\n");
	return (0);
}