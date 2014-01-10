
#include "libft.h"

int	ft_pow(x, n)
{
	int	a;

	if (n == 0)
		return (1);
	else if (n % 2 == 0)
	{
		a = ft_pow(x, n / 2);
		return (a * a);
	}
	else 
		return (x * ft_pow(x, n - 1)
}
