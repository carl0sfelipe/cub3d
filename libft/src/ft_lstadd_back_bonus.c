/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:13:49 by csiqueir          #+#    #+#             */
/*   Updated: 2024/05/08 18:13:50 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
