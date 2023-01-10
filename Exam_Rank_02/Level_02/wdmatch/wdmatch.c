/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrace <ccarrace@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 19:24:55 by ccarrace          #+#    #+#             */
/*   Updated: 2022/11/18 22:39:05 by ccarrace         ###   ########.fr       */
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

	if (argc == 3)
	{
		s1 = argv[1];
		s2 = argv[2];
		i = 0;
		j = 0;
		while (s1[i] && s2[j])
		{
			if (s1[i] == s2[j])
				i++;
			j++;
		}
		if (i == ft_strlen(s1))
			write(1, s1, ft_strlen(s1));
	}
	write(1, "\n", 1);
	return (0);
}
