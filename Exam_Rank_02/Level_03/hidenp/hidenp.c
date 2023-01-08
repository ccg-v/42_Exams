/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrace <ccarrace@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:32:51 by ccarrace          #+#    #+#             */
/*   Updated: 2022/11/03 22:13:52 by ccarrace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *s)
{
	int	i;
	
	i = 0;
	while (*s++)
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	char	*s1;
	char	*s2;
	int	counter;

	if (argc == 3)
	{
		s1 = argv[1];
		s2 = argv[2];
		i = 0;
		j = 0;
		counter = 0;
		while (s1[i])
		{
			while (s2[j])
			{
				if (s1[i] == s2[j])
				{
					counter++;
					break;
				}
				j++;
			}
			i++;
		}
		if (counter == ft_strlen(s1))
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
	return (0);
}
/*
// Smarter and much shorter version

int	main(int argc, char **argv)
{
	char	*s1;
	char	*s2;
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (argc == 3)
	{
		s1 = argv[1];
		s2 = argv[2];
		while (s1[i] && s2[j])
		{
			if (s2[j] == s1[i])
				i++;
			j++;
		}
		if (s1[i] == '\0')
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
	return (0);
}
*/
