/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrace <ccarrace@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 21:03:18 by ccarrace          #+#    #+#             */
/*   Updated: 2023/01/05 20:26:17 by ccarrace         ###   ########.fr       */
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
	int		i;
	char	*s;

	if (argc == 2)
	{
		i = 0;
		s = argv[1];
		while (s[i] && ft_isblank(s[i]))
			   i++;	
		while (s[i])
		{
			if (s[i] && !ft_isblank(s[i]))
				write(1, &s[i], 1);
			if (s[i] && s[i + 1] && ft_isblank(s[i]) && !ft_isblank(s[i + 1]))
				write(1, " ", 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
