/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrace <ccarrace@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 21:49:23 by ccarrace          #+#    #+#             */
/*   Updated: 2023/01/05 20:47:37 by ccarrace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isblank(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	char	*s;
	int		i;

	if (argc == 2)
	{
		s = argv[1];
		i = 0;
		while (s[i] && ft_isblank(s[i]))
			i++;
		while (s[i])
		{
			if (s[i] && !ft_isblank(s[i]))
				write (1, &s[i], 1);
			if (s[i] && s[i + 1] && ft_isblank(s[i]) && !ft_isblank(s[i + 1]))
				write(1, "   ", 3);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
