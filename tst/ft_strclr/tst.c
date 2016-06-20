#include "libft.h"

int		main(void)
{
	char	*str;
	char	*tstr;

	str = "Cheese";			//treated as a constant. Can't be cleared?
	tstr = ft_strdup(str);
	ft_putstr("TSTR: ");
	ft_putendl(tstr);
	ft_strclr(tstr);
	if (*tstr == '\0')
		ft_putendl("tstr cleared");
	else
		ft_putendl("tstr NOT cleared");
	return (0);
}
