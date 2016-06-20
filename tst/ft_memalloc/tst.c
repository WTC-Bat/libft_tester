#include "libft.h"

int		main(void)
{
	char	*str;

	str = ft_memalloc(6);
	str = ft_strcpy(str, "Cheese");
	ft_putstr("STR: ");
	ft_putendl(str);
	return (0);
}
