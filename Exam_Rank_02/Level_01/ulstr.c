/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrace <ccarrace@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 19:37:44 by ccarrace          #+#    #+#             */
/*   Updated: 2022/12/30 21:13:15 by ccarrace         ###   ########.fr       */
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
			if (*s >= 'a' && *s <= 'z')
				c = *s - 32;
			else if (*s >= 'A' && *s <= 'Z')
				c = *s + 32;
			else
				c = *s;
			write(1, &c, 1);
			s++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
