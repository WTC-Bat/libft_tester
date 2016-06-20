#include "libft.h"

int		main(void)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * 5);
	ft_memset(str, 'A', 5);
	ft_putendl("MEMSET");
	ft_putstr("STR: ");
	ft_putendl(str);
	ft_memdel((void *)&str);
	ft_putendl("memory deleted");
	return (0);
}
