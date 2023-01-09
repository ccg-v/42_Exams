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
/*
#include <unistd.h>

int	ft_isblank(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	char 	*s;
	int	i;
	int	num_arg;

	if (argc > 1)
	{
		num_arg = 1;
		while (num_arg < argc)
		{
			s = argv[num_arg];
			i = 0;
			while (s[i])
			{
				if (s[i] && s[i] >= 'a' && s[i] <= 'z')
					s[i] = s[i] - 32;
				write(1, &s[i], 1);
				i++;
				while (s[i] && !ft_isblank(s[i]))
				{
					if (s[i] >= 'A' && s[i] <= 'Z')
						s[i] = s[i] + 32;
					write(1, &s[i], 1);
					i++;
				}
				while (s[i] && ft_isblank(s[i]))
				{
					write(1, &s[i], 1);
					i++;
				}
			}
			write(1, "\n", 1);
			num_arg++;
		}

	}
	else
		write(1, "\n", 1);
	return (0);
}
*/
// ANOTHER WAY 

#include <unistd.h>

void	ft_tolower(char *str)
{
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str = *str + 32;
		str++;
	}
}

void	str_capitalizer(char *str)
{
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		*str = *str - 32;
		str++;
	}
	while (*str)
	{
		if ((*str >= 'a' && *str <= 'z') && (*(str - 1) == '\t' || *(str - 1) == ' '))
		{
			*str = *str - 32;
		}
		str++;
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(*str++)
		i++;
	return(i);
}

int	main(int argc, char **argv)
{
	int	num_arg;

	if (argc > 1)
	{
		num_arg = 1;
		while (num_arg < argc)
		{
			ft_tolower(argv[num_arg]);
			str_capitalizer(argv[num_arg]);
			write(1, argv[num_arg], ft_strlen(argv[num_arg]));
			write(1, "\n", 1);
			num_arg++;
		}
	}
	else
		write(1, "\n", 1);
	return(0);
}
