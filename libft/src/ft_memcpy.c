/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:14:32 by csiqueir          #+#    #+#             */
/*   Updated: 2024/05/08 18:14:32 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char		*temp_src;
	char			*temp_dst;
	unsigned int	i;

	temp_src = src;
	temp_dst = dst;
	i = 0;
	while (i < n)
	{
		*(temp_dst + i) = *(temp_src + i);
		i++;
	}
	return (dst);
}
