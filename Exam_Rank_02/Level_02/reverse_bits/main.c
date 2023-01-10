#include <unistd.h>
#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet);

void print_bits(unsigned char octet)
{
	int	i = 8;
	unsigned char 	bit;

	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
}

int	main(void)
{
	int n = 116;
	int	res;

	print_bits(n);
	write(1, "\n", 1);
	res = reverse_bits(n);
    	printf("%d bit-reversed is %d\n", n, res);
	print_bits(res);
	write(1, "\n", 1);
}

