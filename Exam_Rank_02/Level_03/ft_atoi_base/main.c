#include <stdio.h>
#include <stdlib.h>

int	ft_atoi_base(char *str, int str_base);

int	main(void)
{
	printf("---------------------------------------------------------------------------------\n");
	printf("'13268!' in base 16 is 78440. Your function returns:\n");
	printf("-----> %d\n",ft_atoi_base("13268!", 16)); 
	printf("---------------------------------------------------------------------------------\n");
	printf("'  	-13268!' in base 11 is -18950. Your function returns:\n");
	printf("-----> %d\n",ft_atoi_base("  	-13268", 11)); 
	printf("---------------------------------------------------------------------------------\n");
	printf("'  Decaffeinated coffee is awful' in base 16 is 233615358. Your function returns:\n");
	printf("-----> %d\n", ft_atoi_base("  Decaffeinated coffee is awful", 16));
	printf("---------------------------------------------------------------------------------\n");
}

/* Main to test function sending your own numbers
 * To check if conversion is right, follow the link below:
 * https://www.rapidtables.com/convert/number/base-converter.html
*/
/*
int	main(int argc, char **argv)
{
	char	*nbr;
	int		str_base;

	if (argc == 3)
	{
		nbr = argv[1];
		str_base = atoi(argv[2]);
		printf("%s in base %d is %d in base 10\n", nbr, str_base, ft_atoi_base(nbr, str_base));
	}
	else
		printf("This function needs two arguments: a number and its base\n");
	return (0);
}
*/
