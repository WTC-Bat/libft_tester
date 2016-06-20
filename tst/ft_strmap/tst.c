#include "libft.h"

int		main(void)
{
	char const	*lowstring;
	char		*upstring;

	lowstring = "cheese";
	upstring = ft_strmap(lowstring, &ft_toupper);
	ft_putendl(lowstring);
	ft_putendl(upstring);
	free(upstring);
	return (0);
}
