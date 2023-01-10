#include <stdlib.h>
#include <stdio.h>

void	print_bits(unsigned char octet);

int	main(int argc, char **argv)
{
	if (argc == 2)
		print_bits(atoi(argv[1]));
	else
		printf("No args, or wrong number of args!");
	return (0);
}
