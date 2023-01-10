/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrace <ccarrace@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 19:40:59 by ccarrace          #+#    #+#             */
/*   Updated: 2022/11/23 22:17:53 by ccarrace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Arithmetically solved, no bitwise operations:

unsigned char	reverse_bits(unsigned char octet)
{
	int		i;
	unsigned char	res;

	i = 8;
	res = 0;
	while (i > 0)
	{
		res = res * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return (res);
}

/*
// Several solutions using bitwise operations

unsigned char	reverse_bits2(unsigned char b)
{
	unsigned char	r = 0;
	unsigned		byte_len = 8;

	while (byte_len--)
	{
		r = (r << 1) | (b & 1);
		b >>= 1;
	}
	return (r);
}

// Same as above, but a little more understandable

unsigned char	reverse_bits3(unsigned char octet)
{
	int 			i;
	unsigned char	reversed_octet;

	i = 8;
	reversed_octet = 0;

	while (i > 0)
	{
		reversed_octet = (reversed_octet << 1)  | (octet & 1);
		octet = octet >> 1;
		i--;
	}
	return(reversed_octet);
}

// Curious one

unsigned char   reverse_bits4(unsigned char octet)
{
	unsigned char	out;

	out = 0;
	out = out | ((octet & 128) >> 7);
        out = out | ((octet & 64) >> 5);
        out = out | ((octet & 32) >> 3);
        out = out | ((octet & 16) >> 1);
        out = out | ((octet & 8) << 1);
        out = out | ((octet & 4) << 3);
        out = out | ((octet & 2) << 5);
        out = out | ((octet & 1) << 7);
        return (out);
}
*/
