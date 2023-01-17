#include <stdio.h>
#include <stdlib.h>

int	ft_atoi_base(char *str, int str_base);
int	ft_isvalid(char c, int str_base);

int	main(int argc, char **argv)
{
	char	*nbr;
	int		str_base;
	int		i;

	if (argc == 3)
	{
		nbr = argv[1];
		str_base = atoi(argv[2]);
		i = 0;
		while (nbr[i])
		{
			if (!ft_isvalid(nbr[i], str_base))
			{
				printf("%s is not a valid base %d number!\n", nbr, str_base);
				return (0);
			}
			i++;
		}
		printf("%s in base %d is %d in base 10\n", nbr, str_base, ft_atoi_base(nbr, str_base));
	}
	else
		printf("This function needs two arguments: a number and its base\n");
	return (0);
}
