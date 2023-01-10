/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrace <ccarrace@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 20:12:26 by ccarrace          #+#    #+#             */
/*   Updated: 2022/10/26 20:59:56 by ccarrace         ###   ########.fr       */
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
	int 	start;
	int	end;

	if (argc == 2)
	{
		s = argv[1];
		end = ft_strlen(s) - 1;
		while (s[end] == ' ' || s[end] == '\t')
			end--;
		start = end;
		while (s[start] != ' ' && s[start] != '\t')
		       start--;
		while (++start <= end)
			write(1, &s[start], 1);
	}
	write(1, "\n", 1);
	return (0);
}
