#include <stdio.h>
#include <stdlib.h>

int	ft_atoi_base(char *str, int str_base);

int	main(int argc, char **argv)
{
	char *nbr;
	char *str_base;

	if (argc == 3)
	{
		nbr = argv[1];
		str_base = argv[2];
		printf("%s in base %s is %d in base 10\n", nbr, str_base, ft_atoi_base(nbr, atoi(str_base)));
	}
	else
		printf("This function needs two arguments: a number and its base\n");
	return (0);
}

// To check if the function works properly, use the conversion table available in
// https://www.rapidtables.com/convert/number/base-converter.html

// Basic explanation of conversion:
//
// * Convert decimal to any base
//		Ej. 	29 to base 3
//				remainder
//		29|3	    2
//	 	9|3	    	0
//	 	3|3	    	0
//	 	1|	    	1
//
//		--> 29 = 1002
//
// * Convert any base to decimal
//		str = 1002;
//		res = 0;
//		res    base  str[i]    res
//		 0   *   3  +   1   =   1
//		 1   *   3  +   0   =   3
//	     3   *   3  +   0   =   9
//		 9   *   3  + 	2   =  29
//
//		 --> 1002 = 29

