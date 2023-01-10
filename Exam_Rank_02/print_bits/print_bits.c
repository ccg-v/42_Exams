/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrace <ccarrace@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 23:39:25 by ccarrace          #+#    #+#             */
/*   Updated: 2022/12/21 22:20:23 by ccarrace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i;
	int	mask;

	i = 8;
	mask = 256;
	while (i > 0)
	{
		if (octet & (mask / 2))
			write(1, "1", 1);
		else
			write(1, "0", 1);
		mask /= 2;
		i--;
	}
}

/*
// My first and very primitive version, but does its job!
// It's recursive and ignores zeros on the left side. To display them I wrote a
// complementary function that prints zeros until eight chars have been displayed

void print_bits(unsigned char octet)
{
  int mod;
  
  if(octet > 0)	// OJO: if, no while!!!!!!
  {
    print_bits(octet / 2);
    mod = (octet % 2) + 48;
    write(1, &mod, 1);
  }
}

void zero_fill(unsigned char octet)
{
  int i;
  int octet_copy;
      
  i = 0;
  octet_copy = octet;
  while(octet_copy > 0)
  {
    i++;
    octet_copy = octet_copy / 2;
  }
  while((8 - i) > 0)
  {
    write(1, "0", 1);
    i++;
  }
  print_bits(octet);
}

int main()
{
  zero_fill(116);
  return (0);
}
*/
