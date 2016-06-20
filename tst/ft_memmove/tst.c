#include "libft.h"

int		main(void)
{
	char	*str;
	char	*tstr;

	str = (char *)malloc(sizeof(char) * 5);
	ft_memset(str, 'A', 5);
	tstr = ft_strdup("Cheese");
	ft_putstr("TSTR: ");
	ft_putendl(tstr);
	tstr = ft_memmove((void *)tstr, (void *)str, 3);
	ft_putstr("TSTR: ");
	ft_putendl(tstr);
	ft_memdel((void *)&tstr);
	return (0);
}
