#include <stdio.h>

char	**ft_split(char *s);

int	main(int argc, char **argv)
{
	char 	**tab;
	char 	*s;
	int 	num_words;
	int	i;

	if (argc == 2)
	{
		s = argv[1];
		tab = ft_split(s);
		num_words = ft_countwords(s);
		i = 0;
		while (i <= num_words)
		{
			printf("tab[%d] = %s\n", i, tab[i]);
			i++;
		}
	}
	else
		printf("Wrong arguments!\n");
	return (0);
}

