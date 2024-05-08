/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:13:57 by csiqueir          #+#    #+#             */
/*   Updated: 2024/05/08 18:13:58 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
