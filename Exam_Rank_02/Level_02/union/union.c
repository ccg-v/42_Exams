/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrace <ccarrace@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 20:56:01 by ccarrace          #+#    #+#             */
/*   Updated: 2022/12/22 19:56:09 by ccarrace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The function displays all the chars contained in any of the strings, 
// discarding doubles
// 1. We go through s1 displaying every char after checking with ft_isdouble
//	that it is has not appeared previously in the string and has already
//	been printed.
// 2. We do the same with s2, but this time checking that the chars have not 
//	appeared previously neither in s1 nor in s2.

#include <unistd.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (*s++)
		i++;
	return (i);
}

int	ft_isdouble(char *s, char c, int start)
{
	int	i;

	i = 0;
	while (i < start)
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}


int	main(int argc, char **argv)
{
	int	i;
	int	j;
	char	*s1;
	char	*s2;
	
	if (argc == 3)
	{
		s1 = argv[1];
		s2 = argv[2];
		i = 0;
		while (s1[i])
		{
			if (!ft_isdouble(s1, s1[i], i))
				write(1, &s1[i], 1);
			i++;
		}
		j = 0;
		while (s2[j])
		{
			if (!ft_isdouble(s2, s2[j], j) && !ft_isdouble(s1, s2[j], ft_strlen(s1)))
				write(1, &s2[j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
