/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrace <ccarrace@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 19:13:13 by ccarrace          #+#    #+#             */
/*   Updated: 2023/01/19 23:05:17 by ccarrace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_isblank(char const c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_isvalid(int c, int base)
{
	char *str1 = "0123456789abcdef";
	char *str2 = "0123456789ABCDEF";
	int	i;

	i = 0;
	while (i < base)
	{
		if (c == str1[i] || c == str2[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int		sign;
	int		result;

	sign = 1;
	result = 0;
	while (ft_isblank(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (ft_isvalid(*str, str_base) != -1)
	{
		result = result * str_base + ft_isvalid(*str, str_base);		
		str++;
	}
	return (result * sign);
}

/* MY PREVIOUS VERSION
 * Longer, but easier for me to understand and remember

int	ft_isblank(char const c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_isvalid(int c, int base)
{
	char *str1 = "0123456789abcdef";
	char *str2 = "0123456789ABCDEF";
	int	i;

	i = 0;
	while (i < base)
	{
		if (c == str1[i] || c == str2[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int		sign;
	int		i;
	int		result;

	sign = 1;
	i = 0;
	result = 0;
	while (ft_isblank(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (ft_isvalid(*str, str_base))
	{
		if (*str >= '0' && *str <= '9')						
			result = (result * str_base) + (*str - '0');		
		else if (*str >= 'A' && *str <= 'F')
			result = (result * str_base) + (*str - 'A' + 10);
		else if (*str >= 'a' && *str <= 'f')
			result = (result * str_base) + (*str - 'a' + 10);
		str++;
	}
	return (result * sign);
}
*/
