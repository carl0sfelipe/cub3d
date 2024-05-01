#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst == NULL && new)
	{
		*lst = new;
		new->next = NULL;
	}
	else
	{
		ft_lstlast(*lst)->next = new;
		ft_lstlast(new)->next = NULL;
	}
}
