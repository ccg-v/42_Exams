/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrace <ccarrace@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 20:55:52 by ccarrace          #+#    #+#             */
/*   Updated: 2022/12/15 20:56:04 by ccarrace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isblank(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return(1);
	return(0);
}

int	main(int argc, char **argv)
{
	int	i;
	int	start;
	int	end;
	int	flag;
	char	*s;


	i = 0;
	if (argc > 1)
	{
		s = argv[1];
		// skip previous spaces
		while(ft_isblank(s[i]) == 1 && s[i] != '\0')
			i++;
		start = i;
		// skip first word
		while(ft_isblank(s[i]) == 0 && s[i] != '\0')
			i++;
		end = i;
		// skip spaces between first word and second word
		while(ft_isblank(s[i]) == 1 && s[i] != '\0')
			i++;
		// display from second to last word, but printing ONLY ONE space
		// between words	
		while(s[i] != '\0')
		{
			if (ft_isblank(s[i]) == 0)
			{
				flag = 1; 	// <--- NEED A FLAG HERE...
				write(1, &s[i], 1);
			}
			if (ft_isblank(s[i]) == 1 && ft_isblank(s[i - 1]) == 0)
				write(1, " ", 1);
			i++;
		}
		if (flag == 1)
			write(1, " ", 1);	// <--- ... to display a space before the first word
						// 	when printing it at the end of the string ONLY 
						// 	IF A PREVIOUS WORD HAS ALREADY BEEN DISPLAYED
						//      (if the string has only one word, there's no 
						//      previous word thus we don't need a separation
						//      delimiter)

		// display first word at the end of the string
		while(start < end)
		{
			write(1, &s[start], 1);
			start++;
		}
	}
	write(1, "\n", 1);
	return(0);
}
