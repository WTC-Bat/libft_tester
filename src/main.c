#include <unistd.h>
#include "../includes/libft_tester.h"

void	pstr(char *str)
{
	int		cnt;

	cnt = 0;
	while (str[cnt] != NULL)
	{
		write(1, &str[cnt], 1);
		cnt++;
	}
}

void	pstrnl(char *str)
{
	int		cnt;

	cnt = 0;
	while (str[cnt] != NULL)
	{
		write(1, &str[cnt], 1);
		cnt++;
	}
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	/*
	**	ft_atoi
	*/
	pstr("ft_atoi: ");
	if (ft_atoi_test() == 1)
		pstrnl("OK");
	else
		pstrnl("Fail");
}
