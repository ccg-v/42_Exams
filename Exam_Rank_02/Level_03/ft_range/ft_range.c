#include <stdlib.h>

int	ft_absolute_value(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int	*ft_range(int start, int end)
{
	int	i;
	int	size;
	int	*tab;

	i = 0;
	size = 1 + ft_absolute_value(start - end);
	tab = (int *)malloc(size * sizeof(int));
	if (!tab)
		return (NULL);
	while (i < size)
	{
		tab[i] = start;
		if (start < end)
			start++;
		else
			start--;
		i++;
	}
	return (tab);
}