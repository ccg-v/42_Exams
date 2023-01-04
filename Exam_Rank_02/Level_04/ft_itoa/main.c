#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int nbr);
int	ft_nbrlen(int nbr);

int	main(int argc, char **argv)
{
	char	*str;
	int	len;
	int	nbr;
	int	i;

	if (argc == 2)
	{
		nbr = atoi(argv[1]);
		len = ft_nbrlen(nbr);
		str = ft_itoa(nbr);
		i = 0;
		while (i < len)
		{
			printf("str[%d] = %c\n", i, str[i]);
			i++;
		}
		printf("str is %s\n", str); // Anado esta linea porque no se por que el
	}								// bucle anterior no imprime si str es cero
	else
		printf("Wrong arguments!\n");
	return(0);
}