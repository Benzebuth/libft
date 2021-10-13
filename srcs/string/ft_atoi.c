#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	res;
	int n;

	i = 0;
	n = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	while (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			n++;
		i++;
	}
	res = 0;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res *= 10;
		res += nptr[i] - '0';
		i++;
	}
	if (n == 1)
		return (res * -1);
	else if (n > 1)
		return (0);
	return (res);
}
