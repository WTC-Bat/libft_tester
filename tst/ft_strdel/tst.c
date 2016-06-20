#include "libft.h"

int		main(void)
{
	char	*str;
	char	*tstr;

	str = ft_strnew(5);
	//str = (char *)malloc(sizeof(char) * 6);
	str = "ABCDE";
	tstr = ft_strdup(str);
	ft_putstr("TSTR: ");
	ft_putendl(tstr);
	ft_strdel(&tstr);
	ft_putendl("tstr freed");
	return (0);
}
