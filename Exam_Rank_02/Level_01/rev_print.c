/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrace <ccarrace@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 22:22:16 by ccarrace          #+#    #+#             */
/*   Updated: 2022/12/30 21:08:15 by ccarrace         ###   ########.fr       */
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
	char	*s;
	int		len;

	if (argc == 2)
	{
		s = argv[1];
		len = ft_strlen(s);
		len--;
		while (len >= 0)
		{
			write(1, &s[len], 1);
			len--;
		}		
	}
	write(1, "\n", 1);
	return (0);
}
