/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrace <ccarrace@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 22:04:26 by ccarrace          #+#    #+#             */
/*   Updated: 2022/12/30 21:06:28 by ccarrace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*s;
	int		n;

	if (argc == 2)
	{
		s = argv[1];
		while (*s)
		{
			if (*s >= 'a' && *s <= 'z')
				n = *s - 'a' + 1;
			else if (*s >= 'A' && *s <= 'Z')
				n = *s - 'A' + 1;
			else
				n = 1;
			while (n > 0)
			{
				write(1, &*s, 1);
				n--;
			}
		s++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
