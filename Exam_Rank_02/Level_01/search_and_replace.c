/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrace <ccarrace@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 19:44:46 by ccarrace          #+#    #+#             */
/*   Updated: 2022/12/30 21:14:11 by ccarrace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*s;
	char	*old_letter;
	char	*new_letter;

	if (argc == 4 && !argv[2][1] && !argv[3][1])
	{
		s = argv[1];
		old_letter = argv[2];
		new_letter = argv[3];
		while (*s)
		{
			if (*s == *old_letter)
				*s = *new_letter;
			write(1, &*s, 1);
			s++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
