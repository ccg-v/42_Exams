/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrace <ccarrace@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 19:13:13 by ccarrace          #+#    #+#             */
/*   Updated: 2023/01/05 22:19:46 by ccarrace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isvalid(char c, int str_base)
{
	char	*str1;
	char	*str2;
	int		i;

	str1 = "0123456789abcdef";
	str2 = "0123456789ABCDEF";
	i = 0;
	while (i < str_base)
	{
		if (c == str1[i] || c == str2[i])
			return (1);
		i++;
	}
	return (0);	
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str)
	{
		if (ft_isvalid(*str, str_base) && (*str >= '0' && *str <= '9'))
			result = (result * str_base) + (*str - '0');
		else if (ft_isvalid(*str, str_base) && (*str >= 'A' && *str <= 'F'))
			result = (result * str_base) + (*str - 'A' + 10);
		else if (ft_isvalid(*str, str_base) && (*str >= 'a' && *str <= 'f'))
			result = (result * str_base) + (*str - 'a' + 10);
		str++;
	}
	return (result * sign);	
}
