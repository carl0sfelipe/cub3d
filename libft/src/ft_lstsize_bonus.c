#include "libft.h"
//#include <stdio.h>

int	ft_lstsize(t_list *lst)
{
	int	len;

	if (!lst)
		return (0);
	len = 1;
	while (lst->next)
	{
		len++;
		lst = lst->next;
	}
	return (len);
}
//
//int	main(void)
//{
//	t_list	*head;
//
//	head = ft_lstnew("tandam");
//	ft_lstadd_front(&head, ft_lstnew("42"));
//	ft_lstadd_front(&head, ft_lstnew("www"));
//	printf("%d\n", ft_lstsize(head));
//	printf("%d\n", ft_lstsize(head));
//	return (0);
//}
