/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrace <ccarrace@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:12:36 by ccarrace          #+#    #+#             */
/*   Updated: 2022/12/19 19:47:29 by ccarrace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isdouble(char *s, int start)
{
	int	i;

	i = 0;
	while (i < start)
	{
		if (s[i] == s[start])
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	char	*s1;
	char 	*s2;
	int	i;
	int	j;

	if (argc == 3)
	{
		s1 = argv[1];
		s2 = argv[2];
		i = 0;
		while (s1[i])
		{
			j = 0;
			if(!ft_isdouble(s1, i))
			{
				while(s2[j])
				{
					if (s1[i] == s2[j])
					{
						write(1, &s1[i], 1);
						break;
					}
					j++;	
				}
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
