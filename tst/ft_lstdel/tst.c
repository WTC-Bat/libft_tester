#include "libft.h"

void	delfunc(void *content, size_t size)
{
	ft_putnbr_endl(size);
	ft_putendl((char *)content);
}

int		main(void)
{
	t_list	*tlist;
	t_list	*root;

	ft_putendl("ft_lstnew");
	ft_putendl("---------");
	tlist = ft_lstnew("Cheese", 7);
	tlist->next = ft_lstnew("Crackers", 9);
	root = tlist;
	while (tlist != NULL)
	{
		ft_putendl((char *)tlist->content);
		tlist = tlist->next;
	}
	ft_putchar('\n');

	tlist = root;
	ft_putendl("ft_lstnew");
	ft_putendl("---------");
	ft_lstdel(&tlist, delfunc);
	return (0);
}
