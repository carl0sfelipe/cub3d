#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;
	t_list	*temp;

	node = *lst;
	while (node->next)
	{
		(*del)(node->content);
		temp = node->next;
		free(node);
		node = temp;
	}
	ft_lstdelone(node, &free);
	*lst = NULL;
}
