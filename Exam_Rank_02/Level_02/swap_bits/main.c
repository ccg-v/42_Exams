#include <stdio.h>
#include <unistd.h>

unsigned char	swap_bits(unsigned char octet);

int main(void)
{
	write(1, "swapping 36 ($) should return 66 (B)\n",37);
	printf("--> %d (%c)\n", swap_bits(36), swap_bits(36));
	printf("-------------------------------------\n");
	write(1, "swapping 115 (s) should return 55 (7)\n",38);
	printf("--> %d (%c)\n", swap_bits(115), swap_bits(115));
	printf("-------------------------------------\n");
	write(1, "swapping 85 (U) should return 85 (U)\n",37);
	printf("--> %d (%c)\n", swap_bits(85), swap_bits(85));
}
