/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrace <ccarrace@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 20:55:52 by ccarrace          #+#    #+#             */
/*   Updated: 2023/01/18 20:24:42 by ccarrace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int    ft_isblank(char c)
{
    if ((c >= 9 && c <= 13) || c == 32)
        return(1);
    return(0);
}

int    main(int argc, char **argv)
{
    char    *s;
    int        start;
    int        i;
    int        flag;

    if (argc > 1)
    {
		s = argv[1];
        i = 0;
        start = 0;
        flag = 0;
        // skip blank spaces at the beginning
        while (s[i] && ft_isblank(s[i]))
            i++;
        start = i;
        // skip first word
        while (s[i] && !ft_isblank(s[i]))
            i++;
        // skip blank spaces between first and second word
        while (s[i] && ft_isblank(s[i]))
            i++;        
        // display string (except first word)
        // printing only one space within words
        while (s[i])
        {
            if (ft_isblank(s[i]))
                flag = 1;
            if (!ft_isblank(s[i]))
            {
                if (flag == 1)
                    write(1, ".", 1);
                flag = 0;
                write(1, &s[i], 1);
            }
            i++;
        }
		// print space before displaying first word at the end,
		// only if there is more than one word in the string
		if (flag == 1)
        	write(1, ":", 1);
        // display first word at the end
        while (s[start] &&!ft_isblank(s[start]))
        {
            write(1, &s[start], 1);
            start++;
        }    
    }
    write(1, "\n", 1);
    return (0);
}
