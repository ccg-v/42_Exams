/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrace <ccarrace@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 20:50:16 by ccarrace          #+#    #+#             */
/*   Updated: 2022/12/15 20:51:06 by ccarrace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// La dificultad está en evitar que se imprima un espacio al final
// de la cadena. 
// Lo evito haciendo que el bucle se ejecute siempreque i > 0. 
// De este modo el programa imprime un espacio después de imprimir 
// cada palabra, pero la primera palabra (que se imprime la ultima)
// no la imprime porque su primer caracter ocupa la posicion i = 0. 
// Añado entonces un segundo bucle que me imprime la primera palabra,
// y listo.

#include <unistd.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (*s++)
		i++;
	return (i);
}

int	ft_isblank(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	char	*s;
	int	i;
	int	start;
	int	end;
	
	
	if (argc == 2)
	{
		s = argv[1];
		i = ft_strlen(s) - 1;
		end = i;
		start = 0;
		while(i > 0)	// OJO: evito llegar a i = 0
		{
			if (ft_isblank(s[i]))
			{
				start = i + 1;
				while (start <= end)
				{
					write(1, &s[start], 1);
					start++;
				}
				write(1, " ", 1); // Espacio que no se debe imprimir si
				end = i - 1;	  // hemos llegado al final de la cadena
			}			  // Por eso si i = 0 no entra en el bucle
			i--;
		}
		while (i <= end) // Bucle que se ejecuta cuando i = 0. Hemos llegado al final
		{				// del string, hay que imprimir una ultima 
			write(1, &s[i], 1);	// palabra pero sin anadir un espacio al final
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
