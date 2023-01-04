/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrace <ccarrace@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 20:57:49 by ccarrace          #+#    #+#             */
/*   Updated: 2022/12/15 20:57:53 by ccarrace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	int		tmp;

	i = 0;
	tmp = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = tmp;
			i = 0;
		}
		else
			i++;
	}
}

/* My first solution was recursive. Works but dirty!

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	int		tmp;
	int		flag;

	i = 0;
	tmp = 0;
	flag = 0;
	while(i < (size - 1) && flag == 0)
	{
		if (tab[i] > tab[i + 1])
		{
			flag = 1;
			tmp = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = tmp;
		}
		i++;
	}
	if(flag == 1)
		rt_int_tab(tab, size);
}
*/
