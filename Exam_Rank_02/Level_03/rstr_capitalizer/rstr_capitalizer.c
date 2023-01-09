/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrace <ccarrace@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:55:44 by ccarrace          #+#    #+#             */
/*   Updated: 2022/12/05 20:41:58 by ccarrace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_tolower(char *s)
{
	while (*s)
	{
		if (*s >= 'A' && *s <= 'Z')
			*s = *s + 32;
		s++;
	}
}

int	ft_isblank(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int	ft_islower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	int	num_arg;
	char	*s;

	if (argc > 1)
	{
		num_arg = 1;
		while (num_arg < argc)
		{
			s = argv[num_arg];
			ft_tolower(s);
			while (*s)
			{
				if (*s && *(s + 1) && ft_islower(*s) && ft_isblank(*(s + 1)))	// Last letter of a word
					*s = *s - 32;				
				if (*s && !*(s + 1))	// Last letter of the string
					*s = *s - 32;
				write(1, &*s, 1);
				s++;
			}
			write(1, "\n", 1);
			num_arg++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
