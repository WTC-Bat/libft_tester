#include "libft.h"

int		main(void)
{
	t_list	*tlist;;

	tlist = ft_lstnew("Cheese", 7);
	tlist->next = ft_lstnew("Crackers", 9);
	while (tlist != NULL)
	{
		ft_putendl((char *)tlist->content);
		tlist = tlist->next;
	}
	return (0);
}
