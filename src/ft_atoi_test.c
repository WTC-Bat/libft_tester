#include "../includes/libft_tester.h"

int		ft_atoi_test()
{
	if (ft_atoi("0") != 0
	{
		return (0);
	}
	if (ft_atoi("-42") != -42)
	{
		return (0);
	}
	if (ft_atoi("42" != 42))
	{
		return (0);
	}
	if (ft_atoi("2147483647") != 2147483647)
	{
		return (0);
	}
	if (ft_atoi("-2147483648") != -2147483648)
	{
		return (0);
	}
	return (1);
}
