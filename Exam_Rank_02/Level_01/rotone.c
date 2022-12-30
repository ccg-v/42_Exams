/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrace <ccarrace@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 23:26:26 by ccarrace          #+#    #+#             */
/*   Updated: 2022/12/30 21:09:20 by ccarrace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*s;
	char	c;

	if (argc == 2)
	{
		s = argv[1];
		while (*s)
		{
			if ((*s >= 'a' && *s <= 'y') || (*s >= 'A' && *s <= 'Y'))
				c = *s + 1;
			else if (*s == 'z' || *s == 'Z')
				c = *s - 25;
			else
				c = *s;
			write(1, &c, 1);
			s++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
