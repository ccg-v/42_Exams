#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str);

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("Expected: %d\n", atoi(argv[1]));
		printf("Returned: %d\n", ft_atoi(argv[1]));
	}	
}