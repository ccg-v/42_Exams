/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrace <ccarrace@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 19:18:24 by ccarrace          #+#    #+#             */
/*   Updated: 2023/01/03 23:21:23 by ccarrace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_isblank(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_countwords(char *s)
{
	int	num_words;

	num_words = 0;
	while (*s && ft_isblank(*s))
		s++;
	while (*s)
	{
		if (*s && !ft_isblank(*s))
			num_words++;
		while(*s && !ft_isblank(*s))
			s++;
		while(*s && ft_isblank(*s))
			s++;
	}
	return (num_words);
}

int	ft_wordlen(char *s)
{
	int	len;

	len = 0;
	while (*s && !ft_isblank(*s))
	{
		s++;
		len++;
	}
	return (len);
}

char	**ft_split(char *s)
{
	char	**ptr_array;
	int	word_index;
	int	letter_index;
	int	num_words;

	word_index = 0;
	num_words = ft_countwords(s);
	ptr_array = (char **)malloc((num_words + 1) * sizeof(char *));
	if (!num_words)
		return (NULL);
	while (word_index < num_words)
	{
		while(*s && ft_isblank(*s))
			s++;	
		if (*s && !ft_isblank(*s))
		{
			ptr_array[word_index] = (char *)malloc((ft_wordlen(s) + 1) * sizeof(char));
			if (!ptr_array[word_index])
				return (NULL);
		}
		letter_index = 0;
		while(*s && !ft_isblank(*s))
		{
			ptr_array[word_index][letter_index] = *s;
			letter_index++;
			s++;
		}
		ptr_array[word_index][letter_index] = '\0';
		word_index++;
	}
	ptr_array[word_index] = '\0';
	return(ptr_array);
}
