/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrace <ccarrace@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 23:26:03 by ccarrace          #+#    #+#             */
/*   Updated: 2022/12/21 22:06:26 by ccarrace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	swap_bits(unsigned char octet)
{
	return(octet << 4 | octet >> 4);
}

/*
// My own version (trashy but effective)

unsigned char	swap_bits(unsigned char octet)
{
	unsigned int	swapped_octet;
	int				right_mask;
	int				left_mask;
	unsigned int	right_group;
	unsigned int	left_group;

	swapped_octet = 0;
	right_mask = 15; 	// decimal value for 0000 1111 mask
	left_mask = 240; 	// decimal value for 1111 0000 mask

	// Copy the right group into swapped_octet by applying
	// 15 as an AND mask to octet
	right_group = octet & right_mask;
	right_group = right_group << 4;

	// Copy the left group into swapped_octet by applying 240 
	// as an AND mask to octet
	left_group = octet & left_mask;
	left_group = left_group >> 4;

	// Merge the two groups into one with OR
	swapped_octet = left_group | right_group;
	return(swapped_octet);
}
*/
